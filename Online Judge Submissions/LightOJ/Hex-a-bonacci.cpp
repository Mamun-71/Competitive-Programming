#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f,mod=10000007;
int dp[10005];
int fn(int n)
{
    if (n == 0) return a%mod;
    if (n == 1) return b%mod;
    if (n == 2) return c%mod;
    if (n == 3) return d%mod;
    if (n == 4) return e%mod;
    if (n == 5) return f%mod;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=( fn(n-1)%mod + fn(n-2)%mod + fn(n-3)%mod + fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod )%mod;
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
