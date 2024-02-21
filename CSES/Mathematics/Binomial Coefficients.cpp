#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define LIM 1000003
using namespace std ;
 
ll fact[1000005];
 
void FactGenerate()
{
    ll x=1;
    for(ll i=1; i<=LIM; i++)
    {
        x=(x*i)%mod;
        fact[i]=x;
    }
}
 
ll bigmod(ll a,ll b)
{
    ll x;
 
    if(b==0) return 1;
 
    if(b%2==0)
    {
        x=bigmod(a,b/2)%mod;
        x=(x*x)%mod;
 
        return x;
    }
    else
    {
        x=bigmod(a,b-1)%mod;
        x=(x*a)%mod;
 
        return x;
    }
}
 
void ncr(ll n, ll r)
{
    ll up=fact[n];
    ll down=(fact[r]*fact[n-r])%mod;
 
    //cout<<up<<" "<<down<<endl;
 
    down=bigmod(down,mod-2)%mod;
    down+=mod;
    down%mod;
 
    //cout<<down<<endl;
 
    cout<<(up*down)%mod<<endl;
}
 
int main()
{
    FactGenerate();
 
    ll tc,n,r;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>r;
        if(r==0)
        {
            cout<<1<<endl;
            continue;
        }
        ncr(n,r);
    }
}
