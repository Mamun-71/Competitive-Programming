#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int w,k,r;
    int tc,i;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>w;
        if(w%2==1)
        {
            cout<<"Case "<<i<<": Impossible"<<endl;
        }
        else
        {
            r=w;
            while(r%2!=1)
            {
                r=r/2;
            }
            k=w/r;
            cout<<"Case "<<i<<": "<<r<<" "<<k<<endl;
        }
    }
    return 0;
}
