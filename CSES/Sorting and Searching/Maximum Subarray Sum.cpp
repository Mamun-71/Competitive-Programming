#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
ll arr[200005];
 
 
int main()
{
    ll n,m,i,j,k,l,x,y,ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    ans=0;
    i=0;
    while(i<n)
    {
        x=0;
        for(j=i; j<n; j++)
        {
            ans=max(ans,x);
            x=x+arr[j];
            if(x<=0)
            {
                break;
            }
            ans=max(ans,x);
        }
        i=j+1;
    }
 
    if(ans==0)
    {
        ans=arr[0];
        for(i=0; i<n; i++)
        {
            ans=max(arr[i],ans);
        }
    }
 
    cout<<ans<<endl;
 
    return 0;
}
