///*****Al-Mamun Salauddin*****///
#include <bits/stdc++.h>
#define ll long long int
#define inf 1e18
#define Max 1e18
#define Min -1e18
#define mod 1000000007
#define PI 3.141592653589793238
#define pii pair<ll,ll>
#define Lim 5005
 
using namespace std;
 
ll arr[Lim];
ll dp[Lim][Lim];
 
ll solve(ll in1,ll in2)
{
    if(in1>in2) return 0;
 
    ll x,y;
 
    if(dp[in1][in2]!=-1) return dp[in1][in2];
 
    /**
    State : 1.if in1 picked by player1 then 2 option open for player2.
              in1+1 picked by palyer2 or in2 picked by player2.
              as both player play optimaly so player1 get in1+min(in+1 picked by player2,in2 picked by player2)
 
            2.if in2 picked by player1 then 2 option open for player2.
              in1 picked by palyer2 or in2-1 picked by player2.
              as both player play optimaly so player1 get in2+min(in-1 picked by player2,in2-1 picked by player2)
 
    **/
 
    x=arr[in1]+min(solve(in1+2,in2),solve(in1+1,in2-1));
 
    y=arr[in2]+min(solve(in1+1,in2-1),solve(in1,in2-2));
 
 
    return dp[in1][in2]=max(x,y);
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
 
    cin>>n;
 
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    memset(dp,-1,sizeof dp);
 
    cout<<solve(0,n-1)<<endl;
 
    return 0;
}
 
 
///**Contest Reminder**///
 
/**
 
Reading && Thinking
 
1.Read Carefully problem statement
2.Read again carefully problem statement
3.Think firstly bruteforce solution
4.Try to optimize
5.Think from easy obserbation
6.Write down obserbation
8.Simulate n=1,n=2,n=3,n=4,n=5
9.Simulate sample test case
10.Try to think profness of solution
 
 
Think twice code once
 
 
Writing Code
 
1.Cool you got a solution
2.What you write code please sketch in pad
3.Skatch the solution in pad
4.Carefull about underflow/overflow
5.Carefully implement the code
 
Debug
 
1.Clearance of vector/set/map etc
2.Is it loop increasing in decreasing and vice versa
3.Special case n=1,n=Max
4.Is it break,continue,return value are valid
5.Is it a variable that is globally and locally declare
6.Is all function worked finely
 
 
**/
