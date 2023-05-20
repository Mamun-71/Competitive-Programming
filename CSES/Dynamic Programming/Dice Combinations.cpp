#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll dp[1000005];

ll f(ll n)
{
    if(n==0) return 1LL;
    if(n<0) return 0LL;

    if(dp[n]!=-1) return dp[n];

    ll x=0;
    for(ll i=1; i<=6; i++)
    {
        x+=(f(n-i)%mod)%mod;
    }

    return dp[n]=x%mod;

}


int main()
{
    ll n;

    cin>>n;

    memset(dp,-1,sizeof dp);

    cout<<f(n)%mod;

    return 0;
}
