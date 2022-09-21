#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,c,x,n,m,i,j,k,l,b,r,z;
    string s;
    vector<int>vec;
    cin>>tc;
    for(c=1;c<=tc;c++)
    {
        cin>>s>>b;
        l=s.size();
        b=abs(b);
        if(s[0]=='-')
        {
            r=s[1]-48;
            m=2;
        }
        else
        {
            r=s[0]-48;
            m=1;
        }
        r=r%b;
        for(i=m;i<l;i++)
        {
            x=s[i]-48;
            vec.push_back(x);
            while(r!=0)
            {
                x=r%10;
                vec.push_back(x);
                r=r/10;
            }
            k=vec.size();
            r=0;
            for(j=0;j<k;j++)
            {
                x=vec[j];
                n=1;
                z=j;
                while(z--)
                {
                    n=n*10;
                }
                n=n*x;
                r=r+n;
            }
            r=r%b;
            vec.clear();
        }
        if(r==0)
        {
            cout<<"Case "<<c<<": divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<c<<": not divisible"<<endl;
        }
        vec.clear();
    }
    return 0;
}
