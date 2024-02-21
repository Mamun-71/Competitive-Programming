#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n,m,i;
    set<ll>s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        s.insert(m);
    }
    cout<<s.size()<<endl;
}
