ll Factorize(ll n)
{
    ll root=sqrt(n);

    for(ll i=0; i<prime.size()&&prime[i]<=root; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                factors.push_back(prime[i]);
            }
            root=sqrt(n);
        }
    }

    if(n!=1)
    {
        factors.push_back(n);
    }
}

/* 
   all necessary  funtion need to be added.
   all macro need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
