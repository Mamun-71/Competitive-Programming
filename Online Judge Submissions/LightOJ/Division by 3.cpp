#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n,m,i,j,k,l,x,y,a,b;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>a>>b;
        k=b-a+1;
        if(k<=10)
        {
            l=0;
            for(j=a;j<=b;j++)
            {
                if(j%3!=1)
                {
                    l++;
                }
            }
            cout<<"Case "<<i<<": "<<l<<endl;
        }
        else
        {
            l=0;
            for(j=a;j<=b;j++)
            {
                if(j%3==1)
                {
                    x=j+1;
                    break;
                }
                else
                {
                    l++;
                }
            }
            for(j=b;j>=a;j--)
            {
                if(j%3==1)
                {
                    y=j--;
                    break;
                }
                else
                {
                    l++;
                }
            }
            k=y-x+1;
            m=k/3;
            k=k-m;
            l=l+k;
            cout<<"Case "<<i<<": "<<l<<endl;
        }
    }
    return 0;
}
