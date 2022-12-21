ll node,parent[Max+5],M,arr[Max+5];

struct edge
{

    ll w,u,v;
};

vector<edge>adj;


bool compare(edge x, edge y)
{
    return x.w<y.w;
}

ll findP(ll u)
{
    if(u==parent[u]) return u;

    return parent[u]=findP(parent[u]);
}

void connect(ll u, ll v)
{
    ll paru=findP(u);
    ll parv=findP(v);

    if(paru!=parv)
    {
        parent[parv]=paru;
    }
}

ll getMST(ll state) /// if state = 0(Min), state = 1(Max)
{
    for(ll i=1; i<=node; i++)
    {
        parent[i]=i;
    }

    sort(adj.begin(), adj.end(),compare);

    if(state==1)
    {
        reverse(adj.begin(),adj.end());
    }

    ll cost=0;


    for(ll i=0; i<adj.size(); i++)
    {
        ll paru=findP(adj[i].u);
        ll parv=findP(adj[i].v);



        if(paru!=parv)
        {
            cost+=adj[i].w;

            connect(paru,parv);
        }
    }

    return cost;
}
