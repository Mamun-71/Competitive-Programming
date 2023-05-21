#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,x;
int dp[1005][100005];
int price[1005];
int page[1005];

int main()
{
    cin>>n>>x;

    for(int i=1; i<=n; i++)
    {
        cin>>price[i];
    }

    for(int i=1; i<=n; i++)
    {
        cin>>page[i];
    }

    for(int j=0; j<=x; j++)
    {
        if(price[n]<=j)
        {
            dp[n][j]=page[n];
        }
        else
        {
            dp[n][j]=0;
        }
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int j=0; j<=x; j++)
        {
            int in=i+1;
            int m=j-price[i];
            int a=0,b=0;

            if(m>=0)
            {
                a=dp[in][m]+page[i];
            }
            b=dp[in][j];

            dp[i][j]=max(a,b);
        }
    }

    cout<<dp[1][x]<<endl;

    return 0;
}
