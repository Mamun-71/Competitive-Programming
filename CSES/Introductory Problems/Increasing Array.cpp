#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll  n;
    cin>>n;
 
    ll arr[n+5];
 
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    ll ans=0,mx=0;
 
    for(ll i=0; i<n; i++)
    {
        mx=max(mx,arr[i]);
 
        if(mx>arr[i])
        {
            ans+=(mx-arr[i]);
        }
    }
 
    cout<<ans<<endl;
}
