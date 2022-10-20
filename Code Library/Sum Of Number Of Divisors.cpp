ll Snod(ll n)
{
    ///Sum of number of divisors 1 to n
    /// sqrt(n) approach

    ll res=0;
    ll root=sqrt(n);

    for(ll i=1; i<=root; i++)
    {

        ll s=(n/i)-i;
        s=s*2;
        res+=s;
    }
    res=res+root;

    return res;
}

ll Snod(ll n)
{
    ///Sum of number of divisors 1 to n
    /// n approach

    ll res=0;

    for(ll i=1; i<=n; i++)
    {
        res+=(n/i);
    }

    return res;
}
