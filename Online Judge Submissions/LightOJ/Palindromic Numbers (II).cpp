#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,l,sign=1,n,r,x;
    int s[20];
    int k[20];
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        x=n;
        j=0;
        while(1)
        {
            r=x%10;
            s[j]=r;
            x=x/10;
            if(x==0)
            {
                break;
            }
            j++;
        }
        for(x=j,l=0;x>=0;x--,l++)
        {
            k[x]=s[l];
        }
        for(x=0;x<=j;x++)
        {
            if(s[x]!=k[x])
            {
                sign=-1;
                break;
            }
        }
        if(sign==-1)
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        sign=1;
    }
    return 0;
}
