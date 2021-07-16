#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n][2];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	long long int max=0;
	for(long long int j=0;j<n;j++){
		if(arr[j][0]>arr[j][1]){
			max=arr[j][0];
		}
		else{
			max=arr[j][1];
		}
		if(max%2==0)
	{
		long long int res=max*max;
		if(arr[j][0]==max){
			res=res-arr[j][1]+1;
		}
		else{
			res=res-max+1-max+1+arr[j][0]-1;
		}
		cout<<res<<endl;
	}
	else{
		long long int res=max*max;
		if(arr[j][0]<max){
			res=res-arr[j][0]+1;
		}
		else{
			res=res-max+1-max+1+arr[j][1]-1;
		}
		cout<<res<<endl;
	}	
	}
	return 0;
}
