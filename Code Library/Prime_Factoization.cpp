vector<ll>factors;

ll Factorize(ll n)
{
    /// seive() need to be added in main fuction

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
   all necessary  void funtion need call from particular function.
   all marco need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
