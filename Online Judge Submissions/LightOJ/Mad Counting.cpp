#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll arr[1000005];

int main()
{
    ll tc,cas=0,n,ans;

    cin>>tc;
    while(tc--)
    {
        cas++;
        memset(arr,0,sizeof arr);

        cin>>n;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            arr[x]++;
        }

        ll lim=1000000;
        ans=0;
        for(ll i=0; i<=lim; i++)
        {
            if(arr[i]>0)
            {
                ll m=i+1;
                ll r=arr[i]%m;

                ans+=(arr[i]);

                if(r!=0)
                {
                    ans+=(m-r);
                }
            }
        }

        cout<<"Case "<<cas<<": "<<ans<<endl;
    }

    return 0;
}
