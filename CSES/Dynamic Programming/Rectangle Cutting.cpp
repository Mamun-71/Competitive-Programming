#include<bits/stdc++.h>
#define ll long long int
#define Lim 505
#define inf 100000000
using namespace std;
 
ll a,b;
ll dp[Lim][Lim];
 
ll f(ll x, ll y)
{
    if(x==y) return 0;
 
    if(x==1||y==1)
    {
        ll m=max(x,y)-1;
        return m;
    }
 
    if(dp[x][y]!=-1) return dp[x][y];
 
    ll ans=inf;
 
    for(ll i=1; i<x; i++)
    {
        ll k=1+f(i,y)+f(x-i,y);
        ans=min(ans,k);
    }
 
    for(ll i=1; i<y; i++)
    {
        ll k=1+f(x,i)+f(x,y-i);
        ans=min(ans,k);
    }
 
    dp[x][y]=ans;
    dp[y][x]=ans;
 
    return ans;
}
 
int main()
{
    cin>>a>>b;
    memset(dp,-1,sizeof dp);
 
    cout<<f(a,b)<<endl;
 
    return 0;
}
