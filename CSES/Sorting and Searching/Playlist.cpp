#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,j,k,l,index,x,y,ans,in;
    ll arr[200005];
    set<ll>s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    ans=0;
    in=0,i=0;
    while(i<n)
    {
        if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
        }
        else
        {
            j=in;
            while(j<i)
            {
                if(arr[j]==arr[i])
                {
                    in=j+1;
                    break;
                }
                s.erase(arr[j]);
                j++;
            }
        }
        i++;
        l=s.size();
        ans=max(ans,l);
    }
 
    cout<<ans<<endl;
 
    return 0;
}
