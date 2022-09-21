#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,cas=0,N,C,T;

    cin>>tc;

    while(tc--)
    {
        cas++;
        cin>>N>>C;

        ll k=N*2;

        if(C==0||N==0)
        {
            T=0;
        }
        else
        {
            T=C/k;

            ll x1=T*C-T*T*N;

            ll x2=((T+1)*C)-((T+1)*(T+1)*N);

            if(x2>x1)
            {
                T++;
            }
        }

        cout<<"Case "<<cas<<": "<<T<<endl;
    }
    return 0;

}
