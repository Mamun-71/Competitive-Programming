#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
vector<pair<ll,ll> >vec;
 
int main()
{
    ll n,i,j,k,l,a,b,ans,x;
    set<ll>s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
 
    sort(vec.begin(),vec.end());
    cout<<endl;
 
    ans=0;
    s.insert(vec[0].second);
    for(i=1; i<vec.size(); i++)
    {
        auto it=s.begin();
        x=*it;
        a=vec[i].first;
        b=vec[i].second;
        if(x<a)
        {
            s.erase(x);
        }
        s.insert(b);
        l=s.size();
        ans=max(ans,l);
    }
 
    cout<<ans<<endl;
}
