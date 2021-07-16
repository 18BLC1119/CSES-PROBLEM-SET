#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int sum=(n*(n+1))/2;
	if(sum%2==0 && n!=1 && n!=2)
	{
		cout<<"YES"<<endl;
		vector <long long int> v1;
		vector <long long int> v2;
		if(n%4==0){
			for(long long int i=1;i<=n/4;i++)
			{
				v1.push_back(i);
			}

			for(long long int i=n/4+1;i<=n-n/4;i++)
			{
				v2.push_back(i);
			}
			
			for(long long int i=n-n/4+1;i<=n;i++)
			{
				v1.push_back(i);
			}
		}
		if(n%4==3)
		{
			v1.push_back(1);
			v1.push_back(2);
			v2.push_back(3);
			vector <long long int> v3;
			for(long long int i=4;i<=n;i++)
			{
				v3.push_back(i);
			}
			for(long long int i=0;i<v3.size()/4;i++)
			{
				v1.push_back(v3[i]);
			}
			for(long long int i=v3.size()/4;i<v3.size()-v3.size()/4;i++)
			{
				v2.push_back(v3[i]);
			}
			for(long long int i=v3.size()-v3.size()/4;i<v3.size();i++){
				v1.push_back(v3[i]);
			}
		}
		cout<<v1.size()<<endl;
		for(long long int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<endl;
		cout<<v2.size()<<endl;
		for(long long int i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
