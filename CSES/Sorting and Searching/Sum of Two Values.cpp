#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
vector<pair<ll,ll>>pi;
 
ll solve(ll x)
{
    ll lo,mid,hi,p;
    lo=0;
    hi=pi.size()-1;
    p=-1;
 
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(pi[mid].first==x)
        {
            p=mid;
            break;
        }
        else if(pi[mid].first<x)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
 
    return p;
}
 
int main()
{
    ll tc,n,m,i,j,k,l,X,x,y,in1,in2,p,p1,p2;
    cin>>n>>X;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        pi.push_back({x,i});
    }
 
    sort(pi.begin(),pi.end());
 
    in1=-1,in2=-1;
    for(i=0; i<pi.size(); i++)
    {
        x=pi[i].first;
        y=X-x;
        p=solve(y);
        if(p!=-1)
        {
            if(x==y)
            {
                p1=p-1;
                p2=p+1;
                if(p1>=0)
                {
                    if(pi[p1].first==x)
                    {
                        in1=pi[p1].second;
                        in2=pi[p].second;
                    }
                }
                if(p2<n)
                {
                    if(pi[p2].first==x)
                    {
                        in1=pi[p2].second;
                        in2=pi[p].second;
                    }
                }
            }
            else
            {
                in1=pi[i].second;
                in2=pi[p].second;
            }
        }
 
        if(in1!=-1)
        {
            break;
        }
    }
 
    if(in1==-1)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<in1<<" "<<in2<<endl;
    }
 
    return 0;
 
}
