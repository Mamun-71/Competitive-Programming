#include<bits/stdc++.h>
#define ll long long int
#define Lim 50000
using namespace std;


ll arr[20];


ll pow(ll m)
{
    ll x=1;

    for(ll i=0; i<m; i++)
    {
        x=x*2;
    }

    return x;
}

ll find_lcm(ll a, ll b)
{
    ll g=__gcd(a,b);

    ll x=(a/g)*b;

    return x;
}

ll solve(ll n, ll m)
{
    ll ans=0;
    ll x=pow(m)-1;

    for(ll i=1; i<=x; i++)
    {
        ll a=i;
        ll f=n;

        vector<ll>vec;

        while(a!=0)
        {
            ll r=a%2;
            vec.push_back(r);
            a=a/2;
        }

        while(vec.size()!=m)
        {
            vec.push_back(0);
        }
        reverse(vec.begin(),vec.end());


        vector<ll>v;

        for(ll j=0; j<m; j++)
        {
            if(vec[j]==1)
            {
                v.push_back(arr[j]);
            }
        }

        ll lcm=v[0];

        for(ll j=1; j<v.size(); j++)
        {
            lcm=find_lcm(lcm,v[j]);
        }

        f=f/lcm;

        //cout<<f<<" ";



        ll l=v.size();

        if(l%2==1)
        {
            ans+=f;
        }
        else
        {
            ans-=f;
        }
    }

    //cout<<ans<<endl;

    ans=n-ans;

    return ans;
}

int main()
{

    ll tc,n,m,cas=0,x;

    scanf("%lld",&tc);

    while(tc--)
    {
        cas++;

        scanf("%lld %lld",&n,&m);

        for(ll i=0; i<m; i++)
        {
            scanf("%lld",&arr[i]);
        }

        ll ans=solve(n,m);

        printf("Case %lld: %lld\n",cas,ans);


    }
    return 0;
}
