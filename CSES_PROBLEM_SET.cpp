#include<iostream>
#include<vector>
#include<string>
using namespace std;
using namespace std;
vector<string> graycode(int n){
	if(n<=0)
	{
		vector<string> x1;
		x1.push_back("0");
		return x1;
	}
	if(n==1){
		vector<string> x2;
		x2.push_back("0");
		x2.push_back("1");
		return x2;
	}
	vector<string> behind=graycode(n-1);
	vector<string> res;
	for(int i=0;i<behind.size();i++)
	{
		res.push_back("0"+behind[i]);
	}
	for(int i=behind.size()-1;i>=0;i--){
		res.push_back("1"+behind[i]);
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	vector<string> res=graycode(n);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}
