#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,cas=0,n,k,ans;
    vector<ll>vec;

    cin>>tc;
    while(tc--)
    {
        cas++;
        cin>>n>>k;

        if(n<k)
        {
            ans=0;
        }
        else
        {
            ll m=k;
            ll a=n;
            while(m--)
            {
                ll x=a*a;
                vec.push_back(x);
                a--;
            }

            for(ll i=1; i<=k; i++)
            {
                for(ll j=0; j<vec.size(); j++)
                {
                    if(vec[j]%i==0)
                    {
                        vec[j]=vec[j]/i;
                        break;
                    }
                }
            }


            ans=1;
            for(ll i=0; i<vec.size(); i++)
            {
                ans=ans*vec[i];
            }

        }

        cout<<"Case "<<cas<<": "<<ans<<endl;

        vec.clear();
    }
}
