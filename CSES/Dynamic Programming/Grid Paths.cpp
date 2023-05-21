#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int n;
char grid[1005][1005];
int dp[1005][1005];

int f(int i, int j)
{
    ///Base Case
    if(grid[i][j]=='*') return 0;
    if(i>n||j>n) return 0;
    if(i==n&&j==n) return 1;

    ///Memoization
    if(dp[i][j]!=-1) return dp[i][j];

    ///Transisation
    int a=f(i+1,j)%mod;
    int b=f(i,j+1)%mod;

    return dp[i][j]=(a+b)%mod;

}


int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dp[i][j]=-1;

            cin>>grid[i][j];
        }
    }

    cout<<f(1,1)%mod<<endl;

    return 0;
}
