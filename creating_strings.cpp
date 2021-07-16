#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<char> ch;
	for(int i=0;i<s.size();i++)
	{
		ch.push_back(s[i]);
	}
	vector <string> res;
	sort(ch.begin(),ch.end());
	do{
		string s(ch.begin(),ch.end());
		res.push_back(s);
	}
	while(next_permutation(ch.begin(),ch.end()));
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}
