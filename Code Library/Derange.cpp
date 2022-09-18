ll Derange(ll n)
{
    if(n==0) return 1;
    if(n==1) return 0;
    if(n==2) return 1;

    if(derange[n]!=-1) return derange[n];

    return derange[n]=((n-1)%mod*((Derange(n-1))%mod+(Derange(n-2)%mod))%mod)%mod;
}
