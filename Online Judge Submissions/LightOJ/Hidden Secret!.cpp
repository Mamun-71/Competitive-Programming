#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,n,m,i,j,k,l;
    string s;
    string s1;
    vector<char>a;
    vector<char>b;
    cin>>tc;
    getchar();
    for(c=1; c<=tc; c++)
    {
        getline(cin,s);
        getline(cin,s1);
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            a.push_back(s[i]);
        }
        sort(a.begin(),a.end());
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]==' ')
            {
                continue;
            }
            if(s1[i]>='A'&&s1[i]<='Z')
            {
                s1[i]=s1[i]+32;
            }
            b.push_back(s1[i]);
        }
        sort(b.begin(),b.end());
        n=a.size();
        m=b.size();
        if(n!=m)
        {
            cout<<"Case "<<c<<": No"<<endl;
        }
        else
        {
            k=1;
            for(j=0;j<n;j++)
            {
                if(a[j]!=b[j])
                {
                    k=-1;
                    break;
                }
            }
            if(k==-1)
            {
                cout<<"Case "<<c<<": No"<<endl;
            }
            else
            {
                cout<<"Case "<<c<<": Yes"<<endl;
            }
        }
        a.clear();
        b.clear();
    }
    return 0;
}
