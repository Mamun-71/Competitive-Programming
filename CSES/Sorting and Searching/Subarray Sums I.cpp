#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll in,n,m,i,j,k,sum,ans,x;
    ll arr[200005];
    cin>>n>>x;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    in=0,i=0;
    sum=0,ans=0;
    while(in<n)
    {
        if(sum==x)
        {
            sum=sum-arr[in];
            in++;
            ans++;
        }
        else if(sum>x)
        {
            sum=sum-arr[in];
            in++;
        }
        else if(i<n)
        {
            sum+=arr[i];
            i++;
        }
        else
        {
            sum=sum-arr[in];
            in++;
        }
    }
 
    cout<<ans<<endl;
 
    return 0;
}
