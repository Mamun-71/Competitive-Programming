#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll ncr[1009][1009];
ll derange[1009];

void precal()
{
    ll i, j;
    for(i = 0; i < 1005; i++)
        ncr[i][0] = 1;

    for(i = 1; i < 1005; i++)
        for(j = 1; j < 1005; j++)
            ncr[i][j] = (ncr[i-1][j]+ncr[i-1][j-1])%mod;
}

ll Derange(ll n)
{
    if(n==1) return 0;
    if(n==2) return 1;

    if(derange[n]!=-1) return derange[n];

    return derange[n]=((n-1)%mod*((Derange(n-1))%mod+(Derange(n-2)%mod))%mod)%mod;
}

int main()
{
    memset(derange,-1,sizeof derange);
    for(ll i=1; i<=1000; i++)
    {
        derange[i]=Derange(i)%mod;
    }

    derange[0]=1;
    
    /*for(ll i=0; i<=10; i++)
    {
        cout<<derange[i]<<endl;
    }
    */

    precal();


    ll tc,cas=0,N,M,K;

    cin>>tc;
    while(tc--)
    {
        cas++;

        cin>>N>>M>>K;

        ll fixed=ncr[M][K];

        ll ans=0LL;
        for(ll i=0; i<=N-M; i++)
        {
            ans=ans%mod;

            ll x=ncr[N-M][i]%mod;
            ll y=derange[N-K-i]%mod;

            ll a=(x*y)%mod;

            ans+=a;
        }

        ans=(ans*fixed)%mod;

        cout<<"Case "<<cas<<": "<<ans<<endl;
    }
}
