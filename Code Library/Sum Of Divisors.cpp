ll Sod(ll n)
{
    ll res=1;
    ll root=sqrt(n);

    for(ll i=0;i<prime.size()&&prime[i]<=root;i++)
    {
         if(n%prime[i]==0)
         {
             ll tempsum=1;
             ll p=1;

             while(n%prime[i]==0)
             {
                 n=n/prime[i];
                 p=p*prime[i];
                 tempsum=tempsum+p;
             }
             res=res*tempsum;
         }
    }

    if(n!=1)
    {
        res=res*(n+1);
    }

    return res;
}

/* 
   all necessary  void funtion need call from particular function.
   all marco need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
