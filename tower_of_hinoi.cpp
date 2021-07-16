#include<iostream>
using namespace std;
void tower(int n,int start,int middle,int end){
	if(n==1){
		cout<<start<<" "<<end<<endl;
		return;
	}
	tower(n-1,start,end,middle);
	cout<<start<<" "<<end<<endl;
	tower(n-1,middle,start,end);
}
int main(){
	int n;
	cin>>n;
	cout<<(1<<n)-1<<endl;
	tower(n,1,2,3);
	return 0;
}
