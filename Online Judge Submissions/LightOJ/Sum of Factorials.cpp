#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,c,n,m,i,j,k,l,r,x;
    vector<long long int>fact;
    vector<long long int>vec;
    fact.push_back(1);
    for(i=1;i<=20;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            k=k*j;
        }
        fact.push_back(k);
    }
    cin>>tc;
    for(c=1;c<=tc;c++)
    {
        cin>>n;
        for(i=20;i>=0;i--)
        {
            if(fact[i]<=n)
            {
                n=n-fact[i];
                vec.push_back(i);
            }
        }
        reverse(vec.begin(),vec.end());
        if(n==0)
        {
            cout<<"Case "<<c<<": ";
            for(i=0;i<vec.size()-1;i++)
            {
                cout<<vec[i]<<"!+";
            }
            cout<<vec[i]<<"!"<<endl;
        }
        else
        {
            cout<<"Case "<<c<<": impossible"<<endl;
        }
        vec.clear();
    }
    return 0;
}
