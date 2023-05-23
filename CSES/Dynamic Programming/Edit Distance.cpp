#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,m;
int dp[5005][5005];
string a,b;

int f(int in1,int in2)
{

    if(in1==n)
    {
        return m-in2;
    }
    if(in2==m)
    {
        return n-in1;
    }


    if(dp[in1][in2]!=-1) return dp[in1][in2];

    int ans;

    if(a[in1]==b[in2])
    {
        ans=f(in1+1,in2+1);
    }
    else
    {
        int x=1+f(in1,in2+1); ///Add
        int y=1+f(in1+1,in2); ///Remove
        int z=1+f(in1+1,in2+1); ///Repalce

        ans=min(x,y);
        ans=min(ans,z);
    }

    return dp[in1][in2]=ans;
}

int main()
{
    cin>>a>>b;
    n=a.size();
    m=b.size();

    memset(dp,-1,sizeof dp);

    cout<<f(0,0)<<endl;

    return 0;
}
