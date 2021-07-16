#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> v;
    while(n--)
    {
        ll x;
        cin>>x;
        v.push_back({x,1});
        cin>>x;
        v.push_back({x,-1});
    }
    sort(v.begin(),v.end());
    ll max1=0;
    ll sum=0;
    for(auto i=v.begin();i!=v.end();i++){
        sum+=(*i).second;
        max1=max(max1,sum);
    }
    cout<<max1<<endl;
    return 0;
}