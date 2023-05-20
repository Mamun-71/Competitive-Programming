#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll coin[105];
ll dp[1000005];

ll f(ll sum,ll n)
{
    if(sum==0) return 1LL;
    if(sum<0) return 0LL;

    if(dp[sum]!=-1) return dp[sum];

    ll x=0;
    for(ll i=0; i<n; i++)
    {
        x+=(f(sum-coin[i],n)%mod)%mod;
    }

    return dp[sum]=x%mod;

}


int main()
{
    ll n,sum;

    cin>>n>>sum;

    for(ll i=0; i<n; i++)
    {
        cin>>coin[i];
    }

    memset(dp,-1,sizeof dp);

    cout<<f(sum,n)%mod;

    return 0;
}
