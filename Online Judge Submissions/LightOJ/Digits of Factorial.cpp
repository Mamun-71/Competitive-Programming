#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,digit,j;
    double n,i,x=0,k,base,eps=0.000000001;
    vector<double>vec;
    for(i=1;i<=1000000;i++)
    {
        x=x+log10(i);
        vec.push_back(x);
    }
    cin>>tc;
    for(j=1;j<=tc;j++)
    {
        cin>>n>>base;
        if(n==0)
        {
            cout<<"Case "<<j<<": "<<1<<endl;
            continue;
        }
        k=log10(base);
        x=vec[n-1];
        x=x/k;
        digit=x+1+eps;
        cout<<"Case "<<j<<": "<<digit<<endl;
    }
    return 0;
}
