#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long int step=0;
	for(long long int j=1;j<n;j++){
		if(arr[j]<arr[j-1]){
			step+=arr[j-1]-arr[j];
			arr[j]=arr[j-1];			
		}
	}
	cout<<step<<endl;
	return 0;
}
