ll BigMod(ll a, ll p)
{
    if(p==0) return 1;
    ll x;

    x=BigMod(a,p/2)%mod;
    x=(x*x)%mod;

    if(p%2==1)
    {
        x=(x*a)%mod;
    }

    return x;
}

/* 
   all necessary  funtion need to be added.
   all macro need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
