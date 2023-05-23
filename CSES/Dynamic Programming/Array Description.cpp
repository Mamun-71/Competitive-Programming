#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll n,m;
ll arr[100005];
ll dp[100005][105];
 
ll f(ll in, ll x)
{
    if(arr[in]!=0&&arr[in]!=x) return dp[in][x]=0;
    if(x<=0||x>m) return dp[in][x]=0;
    if(in==n-1)
    {
        return dp[in][x]=1;
    }
 
    if(dp[in][x]!=-1) return dp[in][x];
 
    ll a=f(in+1,x)%mod;
    ll b=f(in+1,x+1)%mod;
    ll c=f(in+1,x-1)%mod;
 
    return dp[in][x]=(a+b+c)%mod;
}
 
int main()
{
    cin>>n>>m;
 
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    memset(dp,-1,sizeof dp);
 
    ll ans=0;
    for(ll i=1; i<=m; i++)
    {
        ans+=f(0,i)%mod;
        ans=ans%mod;
    }
 
    cout<<ans<<endl;
}
