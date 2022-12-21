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
