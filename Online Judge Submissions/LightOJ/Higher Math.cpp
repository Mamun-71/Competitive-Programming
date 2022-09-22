#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,c,x,y,z,i,j,sign;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>a>>b>>c;
        x=max(a,b);
        z=max(x,c);
        if(a==z)
        {
            x=b*b;
            x=x+c*c;
            x=sqrt(x);
            if(a==x)
            {
               sign=1;
            }
            else
            {
                sign=-1;
            }
        }
        else if(b==z)
        {
            x=a*a;
            x=x+c*c;
            x=sqrt(x);
            if(b==x)
            {
                sign=1;
            }
            else
            {
                sign=-1;
            }
        }
        else
        {
            x=a*a;
            x=x+b*b;
            x=sqrt(x);
            if(x==c)
            {
                sign=1;
            }
            else
            {
                sign=-1;
            }
        }
        if(sign==1)
        {
            cout<<"Case "<<i<<": yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": no"<<endl;
        }
    }
    return 0;
}
