#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll k;

ll solve(ll n)
{
    if(n==1) return 1;

    ll x=((solve(n-1)+k-1)%n)+1;

    return x;
}

int main()
{
    ll tc,n,cas=0;

    cin>>tc;
    while(tc--)
    {
        cas++;
        cin>>n>>k;

        ll ans=solve(n);

        cout<<"Case "<<cas<<": "<<ans<<endl;
    }

    return 0;
}
