#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	vector <long long int> x;
	x.push_back(n);
	while(n!=1)
	{
		if(n%2==0){
			n=n/2;
			x.push_back(n);
		}
		else{
			n=n*3+1;
			x.push_back(n);
		}
	}
	for(long long int i=0;i<x.size();i++)
	{
		cout<<x[i]<<" ";
	}
	return 0;
}
