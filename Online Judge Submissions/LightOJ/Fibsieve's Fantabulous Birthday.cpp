#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,n,s,i,root,j,k,l,p,x,y,dif,c;
    cin>>tc;
    c=0;
    while(tc--)
    {
        c++;
        cin>>s;
        root=sqrt(s);
        if(root*root==s)
        {
            if(root%2==0)
            {
                x=root;
                y=1;
            }
            else
            {
                x=1;
                y=root;
            }
        }
        else
        {
            k=root+1;
            if(k%2==0)
            {
                p=root*root;
                dif=abs(s-p);
                if(dif<=k)
                {
                    x=dif;
                    y=k;
                }
                else
                {
                    p=k*k;
                    dif=abs(s-p);
                    dif++;
                    x=k;
                    y=dif;
                }
            }
            else
            {
                p=root*root;
                dif=abs(s-p);
                if(dif<=k)
                {
                    x=k;
                    y=dif;
                }
                else
                {
                    p=k*k;
                    dif=abs(s-p);
                    dif++;
                    x=dif;
                    y=k;
                }
            }
        }
        cout<<"Case "<<c<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}
