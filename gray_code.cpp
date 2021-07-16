#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> generateGray(int n)
{
    if (n <= 0)
    {
    	vector <string> x1;
    	x1.push_back("0");
    	return x1;
	} 
    if (n == 1)
    {
    	vector <string> x2;
    	x2.push_back("0");
    	x2.push_back("1");
    	return x2;
    }
    vector<string> recAns=
          generateGray(n-1);
    vector<string> mainAns;
    for(int i=0;i<recAns.size();i++)
    {
      string s=recAns[i];
      mainAns.push_back("0"+s);
    }
    for(int i=recAns.size()-1;i>=0;i--)
    {
       string s=recAns[i];
       mainAns.push_back("1"+s);
    }
    return mainAns;
}
int main()
{
    vector<string> x=generateGray(3);
    for(int i=0;i<x.size();i++){
    	cout<<x[i]<<endl;
	}
    return 0;
}
