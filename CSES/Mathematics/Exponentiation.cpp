#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll bigmod(ll n,ll p)
{
    ll x,y;
 
    if(p==0) return 1;
 
    if(p%2==0)
    {
        x=bigmod(n,p/2)%mod;
        x=(x*x)%mod;
 
        return x;
    }
    else
    {
        x=bigmod(n,p-1)%mod;
        y=n%mod;
 
        x=(x*y)%mod;
 
        return x;
    }
}
 
int main()
{
    ll tc,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        cout<<bigmod(a,b)%mod<<endl;
    }
}
