#include<bits/stdc++.h>
#define ll long long int
#define Lim 5000000
#define mod 1000000007
using namespace std;

ll fact[Lim+5];

void factorial()
{
    ll x=1;
    fact[0]=1;

    for(ll i=1; i<=Lim; i++)
    {
        x=(x*i)%mod;
        fact[i]=x%mod;
    }
}

ll bigmod(ll a, ll p)
{
    if(p==0) return 1;
    ll x;

    x=bigmod(a,p/2)%mod;
    x=(x*x)%mod;

    if(p%2==1)
    {
        x=(x*a)%mod;
    }

    return x;
}

ll nCr(ll n, ll r)
{
    ll up=fact[n]%mod;
    ll down=(fact[r]*fact[n-r])%mod;
    down=(down*(r+1))%mod;

    down=bigmod(down,mod-2)%mod; /// using Farmat's little theorm A^-1==A^M-2 (where A is down and M is mod)

    ll ans=(up*down)%mod;

    return ans;
}

int main()
{
    factorial();

    ll n,r;

    cin>>n;

    if(n%2==1)
    {
        cout<<0<<endl;
    }
    else
    {
        r=n/2;
        cout<<nCr(n,r)<<endl;
    }

    return 0;

}

/*
   all necessary  void funtion need call from particular function.
   all marco need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
