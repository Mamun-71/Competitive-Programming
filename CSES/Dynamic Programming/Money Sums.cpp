#include<bits/stdc++.h>
#define ll long long int
#define Lim 100005
using namespace std;
 
ll n;
ll coins[105];
ll dp[105][100005];
 
void f(ll in, ll sum)
{
    if(dp[in][sum]!=-1) return ;
    dp[in][sum]=1;
    if(in==n) return ;
 
    f(in+1,sum+coins[in]);
    f(in+1,sum);
}
 
int main()
{
 
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>coins[i];
    }
 
    memset(dp,-1,sizeof dp);
    f(0,0);
 
    set<ll>s;
 
    for(ll i=0; i<=n; i++)
    {
        for(ll j=1; j<Lim; j++)
        {
            if(dp[i][j]==1)
            {
                s.insert(j);
            }
        }
    }
 
    cout<<s.size()<<endl;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
 
}
