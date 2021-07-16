#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long int n;
	long long int m;
	long long int k;
	cin>>n;
	cin>>m;
	cin>>k;
	vector<long long int> v_n;
	vector<long long int> v_m;
	for(long long int i=0;i<n;i++)
	{
		long long int x;
		cin>>x;
		v_n.push_back(x);
	}
	for(long long int j=0;j<m;j++){
		long long int x;
		cin>>x;
		v_m.push_back(x);
	}
	sort(v_n.begin(),v_n.end(),greater<long long int>());
	sort(v_m.begin(),v_m.end(),greater<long long int>());
	int i=0;
	int j=0;
	int count=0;
	while(i<n && j<m){
		if(v_n[i]>=v_m[j]-k && v_n[i]<=v_m[j]+k)
		{
			i++;
			j++;
			count++;
		}
		else if(v_n[i]>v_m[j]-k){
			i++;
		}
		else{
			j++;	
		}
	}
	cout<<count<<endl;
	return 0;
}
