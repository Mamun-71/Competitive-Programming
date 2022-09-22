#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,c,i,j,l,x,y;
    string s;
    char r[10];
    cin>>tc;
    c=1;
    r[0]='s';
    while(tc--)
    {
        cin>>s;
        if(s[4]==r[0])
        {
            cout<<"Case "<<c<<": ";
            cout<<s<<endl;
        }
        else
        {
            cout<<"Case "<<c<<": ";
            l=s.size();
            for(i=0;i<4;i++)
            {
                cout<<s[i];
            }
            cout<<r[0];
            for(i=4;i<l;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        c++;

    }
    return 0;
}
