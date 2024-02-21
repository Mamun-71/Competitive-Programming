#include<bits/stdc++.h>
#define ll long long
#define infinity 1e15
using namespace std;
 
vector<ll>edge[100005];
vector<ll>cost[100005];
ll dis[100005][12];
 
priority_queue < pair <ll, ll>, vector < pair<ll, ll> >, greater< pair<ll, ll> > > pq;
 
void dijkstra(ll source,ll num_node,ll k)
{
    for(ll i=1LL; i<=num_node; i++)
    {
        for(ll j=0; j<k; j++)
        {
            dis[i][j]=infinity;
        }
    }
 
    dis[source][0]=0;
    pq.push({0,source});
 
    while(!pq.empty())
    {
        pair< ll, ll> p=pq.top();
        pq.pop();
 
        ll d=p.first;
        ll u=p.second;
 
        if(dis[u][k-1]<d)
        {
            continue;
        }
 
        for(ll i=0LL; i<edge[u].size(); i++)
        {
            ll v=edge[u][i];
            ll c=d+cost[u][i];
 
            ll pos=-1;
            for(ll j=0; j<k; j++)
            {
                if(dis[v][j]>c)
                {
                    pos=j;
                    break;
                }
            }
 
            if(pos!=-1)
            {
                for(ll j=k-1; j>pos; j--)
                {
                    dis[v][j]=dis[v][j-1];
                }
 
                dis[v][pos]=c;
 
                pq.push({c,v});
            }
        }
    }
}
 
int main()
{
    ll num_node,num_edge,source,k;
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>num_node>>num_edge>>k;
 
    for(ll i=0LL; i<num_edge; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        edge[u].push_back(v);
        cost[u].push_back(w);
    }
 
 
    source=1LL;
    dijkstra(source,num_node,k);
 
 
    for(ll j=0; j<k; j++)
    {
        cout<<dis[num_node][j]<<" ";
    }
    cout<<endl;
 
 
    return 0;
}
 
