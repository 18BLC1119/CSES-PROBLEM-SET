#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x=pow(10,9)+7;
	int n;
	cin>>n;
	int res=1;
	for(int i=0;i<n;i++){
		res*=2;
		res%=x;
	}
	cout<<res<<endl;
	
	return 0;
}
