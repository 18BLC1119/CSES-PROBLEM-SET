#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    multiset<ll,greater<ll>> x;
    ll n;
    ll m;
    cin>>n>>m;
    while(n--)
    {
        ll y;
        cin>>y;
        x.insert(y);
    }
    while(m--)
    {
        ll z;
        cin>>z;
        auto match=x.lower_bound(z);
        if(match==x.end())
        {
            cout<<-1<<endl;
        }
        else{
            cout<<*match<<endl;
            x.erase(match);
        }
    }
    return 0;
}