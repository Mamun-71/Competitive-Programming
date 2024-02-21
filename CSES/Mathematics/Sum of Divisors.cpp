#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
ll solve(ll n)
{
    ll root,sum,mod=1000000007;
    root=sqrt(n);
    sum=0;
 
    for(ll i=1; i<=root; i++)
    {
        ll l=n-(i*i);
        l=l/i;
        l++;
 
        ll first=i;
        ll last=n/i;
 
        l=l%mod;
        first=first%mod;
        last=last%mod;
 
        ll s=l*(first+last);
        s=s/2;
        s=s%mod;
 
        sum+=s;
        sum=sum%mod;
 
        ll k=(l-1)*i;
        k=k%mod;
 
        sum=sum+k;
        sum=sum%mod;
    }
 
    sum=sum%mod;
 
    return sum;
}
 
 
int main()
{
    ll n,mod=1000000007;
 
    cin>>n;
    cout<<solve(n)%mod<<endl;
}
