#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i,j,k,l,x,y;
    multiset<ll>ms;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
 
        auto it=ms.upper_bound(x);
        if(it==ms.end())
        {
            ms.insert(x);
        }
        else
        {
            ms.erase(it);
            ms.insert(x);
        }
    }
 
    cout<<ms.size()<<endl;
 
    return 0;
}
