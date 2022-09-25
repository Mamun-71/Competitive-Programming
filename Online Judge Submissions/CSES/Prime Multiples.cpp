#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,k,ans;
ll prime[100];

ll pow(ll p)
{
    ll x=1LL;
    for(ll i=0; i<p; i++)
    {
        x=x*2LL;
    }
    return x;
}


void solve(ll x)
{
    vector<ll>vec;

    ll cnt=0,r;
    while(x!=0)
    {
        r=x%2;
        vec.push_back(r);
        x=x/2;
        if(r==1)
        {
            cnt++;
        }
    }

    ll a=k-vec.size();
    while(a--)
    {
        vec.push_back(0);
    }
    reverse(vec.begin(),vec.end());


    ll v=n;
    for(ll i=0; i<vec.size(); i++)
    {

        if(vec[i]==1)
        {
            v=v/prime[i];

        }
    }

    if(cnt%2==0)
    {
        ans=ans-v;
    }
    else
    {
        ans=ans+v;
    }
}

int main()
{
    cin>>n>>k;

    for(ll i=0; i<k; i++)
    {
        cin>>prime[i];
    }

    ll l=pow(k)-1;

    ans=0;
    for(ll i=1; i<=l; i++)
    {
        solve(i);
    }

    cout<<ans<<endl;


    return 0;
}


