ll Derange(ll n)
{
    if(n==0) return 1;
    if(n==1) return 0;
    if(n==2) return 1;

    if(derange[n]!=-1) return derange[n];

    return derange[n]=((n-1)%mod*((Derange(n-1))%mod+(Derange(n-2)%mod))%mod)%mod;
}

/* 
   all necessary  void funtion need call from particular function.
   all marco need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
