#include<iostream>
using namespace std;
int main(){
	long long int i;
	cin>>i;
	for(long long int n=1;n<=i;n++){
		cout<<(n*n*(n*n-1)-8-24-16*(n-4)-16-24*(n-4)-(n-4)*(n-4)*8)/2<<endl;
	}
}
