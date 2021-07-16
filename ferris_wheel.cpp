#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	long long int x;
	cin>>n;
	cin>>x;
	vector<long long int> v;
	for(long long int i=0;i<n;i++){
		long long int y;
		cin>>y;
		v.push_back(y);
	}
	sort(v.begin(),v.end());
	long long int count=0;
	long long int i=0;
	long long int j=n-1;
	while(i<=j)
	{
		if(v[i]+v[j]<=x)
		{
			count++;
			i++;
			j--;
		}
		else
		{
			count++;
			j--;
		}
	}
	cout<<count<<endl;
	return 0;
}
