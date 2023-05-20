#include<bits/stdc++.h>
#define ll long long int
#define inf 100000000
using namespace std;
 
ll n,x;
ll coin[105];
ll dp[1000005];
 
ll f(ll m)
{
    if(m==0) return 0;
    if(m<0) return inf;
 
    if(dp[m]!=-1) return dp[m];
 
    ll res=inf,now;
 
    for(ll i=0; i<n; i++)
    {
        now=1+f(m-coin[i]);
        res=min(now,res);
    }
 
    return dp[m]=res;
}
 
int main()
{
    cin>>n>>x;
 
    for(ll i=0; i<n; i++)
    {
        cin>>coin[i];
    }
 
    memset(dp,-1,sizeof dp);
 
    if(f(x)<=1000000)
    {
        cout<<f(x)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
 
    return 0;
 
}
