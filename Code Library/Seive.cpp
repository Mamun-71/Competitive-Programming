void Seive()
{
    int root=sqrt(Lim);

    for(int i=3; i<=Lim; i+=2)
    {
        arr[i]=0;
    }

    for(int i=3; i<=root; i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=Lim; j+=2*i)
            {
                arr[j]=1;
            }
        }
    }

    prime.push_back(2);

    for(int i=3; i<=Lim; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }

}

/* 
   all necessary  funtion need to be added.
   all macro need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
