#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n;
 
    cin>>n;
 
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4)
    {
        cout<<"2 4 1 3"<<endl;
    }
    else
    {
        for(ll i=n; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
 
        for(ll i=n-1; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
 
    }
}
