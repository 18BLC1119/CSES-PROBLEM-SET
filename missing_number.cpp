#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int j=0;j<n-1;j++){
		int x;
		cin>>x;
		a[x-1]=1;
	}
	int res=0;
	for(int k=0;k<n;k++){
		if(a[k]==0){
			res=k;
		}
	}
	cout<<res+1<<endl;
	return 0;
}
