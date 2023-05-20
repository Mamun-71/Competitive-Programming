#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n;
int dp[1000005];

int f(int x)
{
    if(x==0) return 0;

    if(dp[x]!=-1) return dp[x];

    int a=x;
    int k=n+5;

    while(a!=0)
    {
        int r=a%10;
        a=a/10;

        if(r!=0)
        {
            int t=1+f(x-r);
            k=min(k,t);
        }
    }

    return dp[x]=k;
}

int main()
{


    cin>>n;

    for(int i=0; i<=n; i++)
    {
        dp[i]=-1;
    }

    f(n);

    cout<<dp[n]<<endl;


    return 0;
}
