#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
using namespace std;
int appledivision(long long int *arr,long long int n){
	vector <string> allcombinations;
	long long int cn=pow(2,n)-1;
	queue<string> q;
	q.push("1");
	while(cn--)
	{
		string s1=q.front();
		allcombinations.push_back(s1);
		q.pop();
		q.push(s1+"0");
		q.push(s1+"1");
	}
	long long int min;
	long long int sum1=0;
	long long int sum2=0;
	string s1=allcombinations[0];
	long long int len=s1.length();
	for(long long int i=0;i<len;i++){
		if(s1[n-1-i]=='0')
		{
			sum1+=arr[n-1-i];
		}
		else{
			sum2+=arr[n-1-i];
		}
	}
	for(long long int i=len;i<n;i++)
	{
		sum1+=arr[n-1-i];
	}
	if(sum1>sum2)
	{
		min=sum1-sum2;
	}
	else{
		min=sum2-sum1;
	}
	for(long long int i=1;i<pow(2,n)-1;i++)
	{
		long long int min1;
		long long int sum1=0;
		long long int sum2=0;
		string s1=allcombinations[i];
		long long int len=s1.length();
		for(long long int i=0;i<len;i++){
			if(s1[n-1-i]=='0')
			{
				sum1+=arr[n-1-i];
			}
			else{
				sum2+=arr[n-1-i];
			}
		}
		for(long long int i=len;i<n;i++)
		{
			sum1+=arr[n-1-i];
		}
		if(sum1>sum2)
		{
			min1=sum1-sum2;
		}
		else{
			min1=sum2-sum1;
		}
		if(min1<min)
		{
			min=min1;
		}
	}
	return min;
}
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int res=appledivision(arr,n);
	cout<<res<<endl;
	return 0;
}
