#include<iostream>
using namespace std;
string res(int a,int b)
{
	if(a>b){
		swap(a,b);
	}
	if(2*a<b){
		return "NO";
	}
	else{
		a=a%3;
		b=b%3;
		if(a>b){
			swap(a,b);
		}
		if((a==0&& b==0)|| (a==1 && b==2)){
			return "YES";
		}
		else{
			return "NO";
		}
	}	
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		cout<<res(a,b)<<endl;
	}
	return 0;
}
