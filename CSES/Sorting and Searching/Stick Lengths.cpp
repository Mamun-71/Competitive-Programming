#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
ll n,arr[200005];
 
ll f(ll x)
{
    ll i,ans=0;
    for(i=0; i<n; i++)
    {
        ll k=abs(x-arr[i]);
        ans=ans+k;
    }
    return ans;
}
 
int main()
{
    ll i,j,x,y;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+n);
    i=n/2;
    j=i-1;
    x=f(arr[i]);
    if(j>=0)
    {
        y=f(arr[j]);
        x=min(x,y);
    }
    cout<<x<<endl;
    return 0;
 
}
