void Segmented_Seive(ll L ,ll R)
{
    ll root=sqrt(R);

    if(L==1) L++;
    ll len=R-L+1;

    for(ll i=0; i<len; i++)
    {
        arr[i]=0;
    }

    for(ll i=0; i<prime.size()&&prime[i]<=root; i++)
    {
        ll p=prime[i];
        ll j=p*p;

        if(j<L)
        {
            /// To inside in in range L R
            
            j=(L+p-1)/p;
            j=j*p;
        }

        for(; j<=R; j+=p)
        {
            arr[j-L]=1;
        }
    }

    for(ll i=0; i<len; i++)
    {
        if(arr[i]==0)
        {
            sprime.push_back(i+L);
        }
    }
}

/* 
   all necessary  funtion need to be added.
   all macro need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
