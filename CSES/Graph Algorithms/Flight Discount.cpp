#include<bits/stdc++.h>
#define ll long long
#define infinity 1e15
using namespace std;
 
vector<ll>edge1[100005];
vector<ll>edgen[100005];
map<pair<ll,ll>, ll>cost1;
map<pair<ll,ll>, ll>costn;
 
ll dis1[100005];
ll disn[100005];
 
priority_queue < pair <ll, ll>, vector < pair<ll, ll> >, greater< pair<ll, ll> > > pq;
 
void dijkstra1(ll source,ll num_node)
{
    for(ll i=1LL; i<=num_node; i++)
    {
        dis1[i]=infinity;
    }
 
    dis1[source]=0;
    pq.push({0,source});
 
    while(!pq.empty())
    {
        pair< ll, ll> p=pq.top();
        pq.pop();
 
        ll d=p.first;
        ll u=p.second;
 
        if(dis1[u]<d)
        {
            continue;
        }
 
        for(ll i=0LL; i<edge1[u].size(); i++)
        {
            ll v=edge1[u][i];
            ll c=d+cost1[ {u,v}];
 
            if(c<dis1[v])
            {
                dis1[v]=c;
                pq.push({c,v});
            }
        }
    }
}
 
 
void dijkstran(ll source,ll num_node)
{
    for(ll i=1LL; i<=num_node; i++)
    {
        disn[i]=infinity;
    }
 
    disn[source]=0;
    pq.push({0,source});
 
    while(!pq.empty())
    {
        pair< ll, ll> p=pq.top();
        pq.pop();
 
        ll d=p.first;
        ll u=p.second;
 
        if(disn[u]<d)
        {
            continue;
        }
 
        for(ll i=0LL; i<edgen[u].size(); i++)
        {
            ll v=edgen[u][i];
            ll c=d+costn[ {u,v}];
 
            if(c<disn[v])
            {
                disn[v]=c;
                pq.push({c,v});
            }
        }
    }
}
 
int main()
{
    ll num_node,num_edge,source;
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>num_node>>num_edge;
 
    for(ll i=0LL; i<num_edge; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
 
        if(cost1[ {u,v}]==0)
        {
            edge1[u].push_back(v);
            edgen[v].push_back(u);
 
            cost1[ {u,v}]=w;
            costn[ {v,u}]=w;
        }
        else
        {
            cost1[ {u,v}]=min(cost1[ {u,v}],w);
            costn[ {v,u}]=min(costn[ {v,u}],w);
        }
    }
 
 
    source=1LL;
    dijkstra1(source,num_node);
 
 
    source=num_node;
    dijkstran(source,num_node);
 
    ll ans=infinity;
 
    for(ll u=1LL; u<=num_node; u++)
    {
        for(ll i=0; i<edge1[u].size(); i++)
        {
            ll v=edge1[u][i];
 
            if(dis1[u]!= infinity && disn[v]!= infinity)
            {
                ll k=dis1[u]+disn[v]+(cost1[{u,v}]/2);
 
                ans=min(ans,k);
            }
        }
    }
 
    cout<<ans<<endl;
 
    return 0;
}
