#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define Lim 1000000
using namespace std;
 
ll derange[Lim+5];
 
ll Derange(ll n)
{
    if(n==0) return 1;
    if(n==1) return 0;
    if(n==2) return 1;
 
    if(derange[n]!=-1) return derange[n];
 
    return derange[n]=((n-1)%mod*((Derange(n-1))%mod+(Derange(n-2)%mod))%mod)%mod;
}
 
int main()
{
    ll n;
 
    memset(derange,-1,sizeof derange);
 
    cin>>n;
    cout<<Derange(n)<<endl;
 
 
    return 0;
