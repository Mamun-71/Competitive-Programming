#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,i,j,k=0,l,sign=1;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>m>>n;
        l=n*m;
        if(n==1||m==1)
        {
            cout<<"Case "<<i<<": "<<l<<endl;
        }
        else if(n==2||m==2)
        {
            while(l>0)
            {
                if(sign==1)
                {
                    if(l>4)
                    {
                       l=l-4;
                       k=k+4;
                    }
                    else
                    {
                        k=k+l;
                        l=0;
                    }
                    sign=-1;
                }
                else
                {
                    l=l-4;
                    sign=1;
                }
            }
            cout<<"Case "<<i<<": "<<k<<endl;
        }
        else if(n%2!=0&&m%2!=0)
        {
            l=l/2+1;
            cout<<"Case "<<i<<": "<<l<<endl;
        }
        else
        {
            l=l/2;
            cout<<"Case "<<i<<": "<<l<<endl;
        }
        k=0;
        sign=1;
    }
    return 0;
}

