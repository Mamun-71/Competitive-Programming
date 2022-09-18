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
