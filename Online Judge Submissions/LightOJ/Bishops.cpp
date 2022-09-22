#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,i,j,n,m,x1,y1,x2,y2,sign;
    cin>>tc;
    for(c=1;c<=tc;c++)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1%2==0&y1%2==0)
        {
            if(x2%2==1&&y2%2==0)
            {
                sign=-1;
            }
            else if(x2%2==0&&y2%2==1)
            {
                sign=-1;
            }
            else
            {
                n=abs(x1-x2);
                m=abs(y1-y2);
                if(n==m) sign=1;
                else sign=2;
            }
        }
        else if(x1%2==1&y1%2==1)
        {
            if(x2%2==1&&y2%2==0)
            {
                sign=-1;
            }
            else if(x2%2==0&&y2%2==1)
            {
                sign=-1;
            }
            else
            {
                n=abs(x1-x2);
                m=abs(y1-y2);
                if(n==m) sign=1;
                else sign=2;
            }
        }
        else if(x1%2==1&y1%2==0)
        {
            if(x2%2==0&&y2%2==0)
            {
                sign=-1;
            }
            else if(x2%2==1&&y2%2==1)
            {
                sign=-1;
            }
            else
            {
                n=abs(x1-x2);
                m=abs(y1-y2);
                if(n==m) sign=1;
                else sign=2;
            }
        }
        else if(x1%2==0&y1%2==1)
        {
            if(x2%2==0&&y2%2==0)
            {
                sign=-1;
            }
            else if(x2%2==1&&y2%2==1)
            {
                sign=-1;
            }
            else
            {
                n=abs(x1-x2);
                m=abs(y1-y2);
                if(n==m) sign=1;
                else sign=2;
            }
        }
        if(sign==-1)
        {
            cout<<"Case "<<c<<": impossible"<<endl;
        }
        else
        {
            cout<<"Case "<<c<<": "<<sign<<endl;
        }
    }
    return 0;
}
