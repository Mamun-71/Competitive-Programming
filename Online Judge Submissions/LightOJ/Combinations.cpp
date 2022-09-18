#include<bits/stdc++.h>
using namespace std;
int bigmod(long long int base,long long int power,long long int mod)
{
    long long int p1,p2;
    if(power==0)
    {
        return 1;
    }
    else if(power%2!=0)
    {
        p1=base%mod;
        p2=(bigmod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else
    {
        p1=(bigmod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
int main()
{
    long long int tc,n,m,a,b,i,j,k,l,x,y,r,c,mod=1000003,base,power;
    vector<long long int>vec;
    vec.push_back(1);
    k=1;
    for(i=1;i<=1000000;i++)
    {
        k=k*i;
        k=k%mod;
        vec.push_back(k);
    }
    cin>>tc;
    for(c=1;c<=tc;c++)
    {
        cin>>n>>k;
        i=n-k;
        a=vec[n];
        j=vec[i]*vec[k];
        b=j%mod;
        base=b;
        power=mod-2;
        //cout<<a<<" "<<b<<endl;
        b=bigmod(base,power,mod);
        a=a%mod;
        b=b%mod;
        l=(a*b)%mod;
        //cout<<a<<" "<<b<<endl;
        cout<<"Case "<<c<<": "<<l<<endl;
    }
    return 0;
}
