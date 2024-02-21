#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define Lim 2000005
using namespace std;
 
ll fact[Lim+5];
 
void factorial()
{
    ll x=1;
    fact[0]=1;
 
    for(ll i=1; i<=Lim; i++)
    {
        x=(x*i)%mod;
        fact[i]=x%mod;
    }
}
 
ll bigmod(ll a, ll p)
{
    if(p==0) return 1;
    ll x;
 
    x=bigmod(a,p/2)%mod;
    x=(x*x)%mod;
 
    if(p%2==1)
    {
        x=(x*a)%mod;
    }
 
    return x;
}
 
ll nCr(ll n, ll r)
{
    ll up=fact[n]%mod;
    ll down=(fact[r]*fact[n-r])%mod;
 
    down=bigmod(down,mod-2)%mod; /// using Farmat's little theorm A^-1==A^M-2 (where A is down and M is mod)
 
    ll ans=(up*down)%mod;
 
    return ans;
}
 
int main()
{
    factorial();
 
    ll n,m,r;
    cin>>n>>m;
 
    n=n+m-1;
    r=m;
 
    cout<<nCr(n,r)<<endl;
 
    return 0;
}
