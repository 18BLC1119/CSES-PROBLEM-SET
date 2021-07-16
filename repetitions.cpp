#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=1;
	int best=0;
	for(int i=1;i<n;i++){
		if(s[i]!=s[i-1]){
			best=max(cur,best);
			cur=0;
		}
		cur++;
	}
	best=max(cur,best);
	cout<<best;
}
