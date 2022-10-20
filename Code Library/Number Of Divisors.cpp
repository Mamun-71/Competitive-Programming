ll Nod(ll n)
{
    /// seive() need to be added in main fuction

    ll res=1;
    ll root=sqrt(n);

    for(ll i=0; i<prime.size()&&prime[i]<=root; i++)
    {
        if(n%prime[i]==0)
        {
            ll p=0;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                p++;
            }
            p++;
            root=sqrt(n);

            res=res*(p);
        }
    }

    if(n!=1)
    {
        res=res*2;
    }

    return res;
}
