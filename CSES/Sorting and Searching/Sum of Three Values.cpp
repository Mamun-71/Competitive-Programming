#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
vector<pair<ll,ll>>vec;
 
ll BinarySearch(ll lo,ll hi,ll X)
{
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(vec[mid].first==X)
        {
            ll p=vec[mid].second;
            return p;
        }
        else if(vec[mid].first<X)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
 
    return -1;
}
 
int main()
{
    ll n,m,i,j,k,l,x,y,z,sum,p1,p2,p3;
 
    cin>>n>>sum;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        vec.push_back({x,i});
    }
 
    sort(vec.begin(),vec.end());
 
    if(n<=2)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
 
        p3=-1;
        for(i=0; i<vec.size()-2; i++)
        {
            x=vec[i].first;
            for(j=i+1; j<vec.size()-1; j++)
            {
                y=vec[j].first;
                k=sum-(x+y);
                p3=BinarySearch(j+1,n-1,k);
                if(p3!=-1)
                {
                    p1=vec[i].second;
                    p2=vec[j].second;
                    break;
                }
 
            }
            if(p3!=-1)
            {
                break;
            }
        }
 
        if(p3==-1)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<p1<<" "<<p2<<" "<<p3<<endl;
        }
    }
 
    return 0;
}
