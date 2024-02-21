
#include<bits/stdc++.h>
#define ll long long int
#define Lim 200005
using namespace std;
 
ll n;
ll dp[Lim];
map<pair<ll,ll>,ll>mp;
vector< pair< pair<ll,ll>,ll > >vec;
 
ll fn(ll v)
{
    ll lo=0,hi=n,mid;
 
    while(lo<hi)
    {
        mid=(lo+hi)/2;
 
        if(vec[mid].first.first>=v)
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
 
    return lo;
}
 
ll solve(ll in)
{
    if(in==n) return 0;
    if(dp[in]!=-1) return dp[in];
 
    ll st=vec[in].first.first;
    ll en=vec[in].first.second;
    ll p=vec[in].second;
 
    ll a=solve(in+1);
    ll b=p+solve(fn(en+1));
 
    return dp[in]=max(a,b);
}
 
int main()
{
    cin>>n;
 
    for(ll i=0; i<n; i++)
    {
        ll x,y,p;
        cin>>x>>y>>p;
 
        vec.push_back({{x,y},p});
    }
 
    sort(vec.begin(),vec.end());
 
    memset(dp,-1,sizeof dp);
 
    cout<<solve(0)<<endl;
 
    return 0;
}
/*
 
 
10
76 77 96
77 78 11
11 12 46
43 44 82
25 25 87
96 97 4
39 40 22
42 42 62
42 42 30
88 88 19
 
 
*/
