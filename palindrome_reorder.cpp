#include<iostream>
#include<typeinfo>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char a='A';
	int alphabet[26]={};
	for(int i=0;i<s.size();i++)
	{
		alphabet[(s[i]-65)]++;
	}
	char middle;
	int count=0;
	vector <char> v;
	for(int i=0;i<26;i++){
		if(alphabet[i]%2!=0)
		{
			count++;
			middle='A'+i;
			alphabet[i]-=1;
		}
		int z=alphabet[i];
		z=z/2;
		while(z!=0)
		{
			v.push_back(('A'+i));
			z--;
		}
	}
	if(count==1 || count==0)
	{
		for(int i=0;i<v.size();i++){
			cout<<v[i];
		}
		if(count==1)
		{
			cout<<middle;	
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i];
		}
	}
	else{
		cout<<"NO SOLUTION";
	}
	return 0;
}
