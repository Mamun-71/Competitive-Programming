#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll bigmod(ll n,ll p,ll m)
{
    ll x,y;
 
    if(p==0) return 1;
 
    if(p%2==0)
    {
        x=bigmod(n,p/2,m)%m;
        x=(x*x)%m;
 
        return x;
    }
    else
    {
        x=bigmod(n,p-1,m)%m;
        y=n%m;
 
        x=(x*y)%m;
 
        return x;
    }
}
 
int main()
{
    ll tc,a,b,c;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c;
 
        ll p=bigmod(b,c,mod-1)%(mod-1);
 
        cout<<bigmod(a,p,mod)%mod<<endl;
    }
}
