#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll n,m;
ll dp[505][63050];
 
ll solve(ll in,ll cursum,ll sum)
{
 
    if(sum==cursum)
    {
        return 1LL;
 
    }
    if(cursum>sum) return 0;
    if(in>n) return 0LL;
 
    if(dp[in][cursum]!=-1)
    {
        return dp[in][cursum];
    }
 
    ll a,b;
 
    a=solve(in+1,cursum+in,sum)%mod;
    b=solve(in+1,cursum,sum)%mod;
 
    return dp[in][cursum]=(a+b)%mod;
}
 
ll bigmod(ll x,ll p)
{
    if(p==0) return 1;
 
    ll k;
 
    k=bigmod(x,p/2)%mod;
    k=(k*k)%mod;
 
    if(p%2==1)
    {
        k=(k*x)%mod;
    }
 
    return k;
}
 
int main()
{
    cin>>n;
 
    m=n*(n+1);
 
    ll ans=0;
 
    ll d=bigmod(2LL,mod-2)%mod;
 
    if(m%4==0)
    {
 
        memset(dp,-1,sizeof dp);
 
        m=m/4;
 
        ans=solve(1LL,0LL,m)%mod;
 
    }
    ans=(ans*d)%mod;
 
    cout<<ans<<endl;
 
    return 0;
}
