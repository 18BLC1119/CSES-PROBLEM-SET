#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	vector<long long int> v;
	for(long long int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long int count=1;
	for(long long int i=1;i<n;i++){
		if(v[i]!=v[i-1])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
