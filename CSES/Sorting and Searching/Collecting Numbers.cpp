#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n,m,i,j,k,l,x,y;
    vector< pair<ll , ll> >vec;
 
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        vec.push_back({x,i});
    }
 
    sort(vec.begin(),vec.end());
 
    ll ans=1;
    for(i=0; i<vec.size()-1; i++)
    {
        x=vec[i].second;
        y=vec[i+1].second;
        if(x>y)
        {
            ans++;
        }
    }
 
    cout<<ans<<endl;
 
    return 0;
}
