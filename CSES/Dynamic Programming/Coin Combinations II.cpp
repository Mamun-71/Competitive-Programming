#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int n,m;
int coin[1000005];
int dp[105][1000005];


int main()
{
    cin>>n>>m;

    for(ll i=0; i<n; i++)
    {
        cin>>coin[i];
    }

    for(ll i=0; i<n; i++)
    {
        dp[i][0]=1;
    }

    for(ll i=n-1; i>=0; i--)
    {
        for(ll j=1; j<=m; j++)
        {
            ll a=0,b=0;

            ll x=i;
            ll y=j-coin[i];

            if(y>=0)
            {
                a=dp[x][y]%mod;
            }

            x=i+1;
            y=j;

            if(x<n)
            {
                b=dp[x][y]%mod;
            }

            dp[i][j]=(a+b)%mod;
        }
    }

    cout<<dp[0][m]<<endl;

    return 0;
}
