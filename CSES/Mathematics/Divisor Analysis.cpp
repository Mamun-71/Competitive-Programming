#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll n;
ll pr[100005];
ll pw[100005];
 
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
 
ll nod()
{
    ll x=1;
    for(ll i=0; i<n; i++)
    {
        x=(x*(pw[i]+1)%mod)%mod;
    }
    return x;
}
 
ll sod()
{
    ll x;
    ll up=1,down=1;
 
    for(ll i=0; i<n; i++)
    {
        ll a=pr[i];
        ll p=pw[i]+1;
 
        ll v=bigmod(a,p)%mod;
        v=v-1;
        up=up*v;
        up=up%mod;
    }
 
    for(ll i=0; i<n; i++)
    {
        down=(down*(pr[i]-1))%mod;
    }
 
    down=bigmod(down,mod-2)%mod;
 
    x=(up*down)%mod;
 
    return x;
 
}
 
ll pod()
{
    ll prefix[100005];
    ll suffix[100005];
 
    ll p=1,m=mod-1;
    for(ll i=0; i<n; i++)
    {
        p=(p*(pw[i]+1))%m;
        prefix[i]=p;
    }
 
    p=1;
    for(ll i=n-1; i>=0; i--)
    {
        p=(p*(pw[i]+1))%m;
        suffix[i]=p;
    }
 
    ll x=1;
 
    for(ll i=0; i<n; i++)
    {
        ll pre=1,suf=1,k;
        p=1;
 
        if(i!=0)
        {
            pre=prefix[i-1];
        }
 
        if(i!=n-1)
        {
            suf=suffix[i+1];
        }
 
        p=(pw[i]*(pw[i]+1));
        p=(p/2)%m;
        p=(pre*p)%m;
        p=(suf*p)%m;
 
        k=bigmod(pr[i],p)%mod;
 
        x=(x*k)%mod;
 
    }
 
    return x;
 
}
 
int main()
{
    cin>>n;
 
    for(ll i=0; i<n; i++)
    {
        cin>>pr[i]>>pw[i];
    }
 
    ll ans1=nod();
    ll ans2=sod();
    ll ans3=pod();
 
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
 
    return 0;
}
