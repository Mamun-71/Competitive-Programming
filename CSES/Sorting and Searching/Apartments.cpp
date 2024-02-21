#include<bits/stdc++.h>
#define ll long long int
#define Max 1e15
using namespace std;
 
int main()
{
    ll n,m,i,j,k,l,x,y,z;
    multiset<ll>ms;
    vector<ll>vec;
 
    cin>>n>>m>>k;
    for(i=0; i<n; i++)
    {
        cin>>x;
        ms.insert(x);
    }
    for(i=0; i<m; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
 
    ll ans=0;
    for(i=0; i<vec.size(); i++)
    {
        x=vec[i]-k;
        y=vec[i]+k;
        auto it=ms.upper_bound(x);
 
        bool flag=false;
        if(it!=ms.begin())
        {
            it--;
            m=*it;
            if(m>=x&&m<=y)
            {
                ms.erase(it);
                ans++;
                flag=true;
            }
            it++;
        }
 
        if(flag==false&&it!=ms.end())
        {
            m=*it;
            if(m>=x&&m<=y)
            {
                ms.erase(it);
                ans++;
                flag=true;
            }
        }
 
    }
 
    cout<<ans<<endl;
 
    return 0;
}
