void nCr()
{

    for(ll i = 0; i < 1005; i++)
    {
        ncr[i][0] = 1; /// nC0=1
    }

    for(ll i = 1; i < 1005; i++)
    {
        for(ll j = 1; j < 1005; j++)
        {
            ncr[i][j] = (ncr[i-1][j]+ncr[i-1][j-1])%mod; ///nCr = (n-1)Cr + (n-1)C(r-1)

        }
    }
}

/* 
   all necessary  void funtion need call from particular function.
   all marco need to be define.
   Though this precode was tested,check all function that give correct answer.
*/
