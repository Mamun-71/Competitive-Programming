#include<bits/stdc++.h>
#define ll long long int
#define Max 1e15
using namespace std;
 
int main()
{
    ll n,m,i,j,k,l,x,y,z;
    multiset<ll>ms;
    vector<ll>vec;
 
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>x;
        ms.insert(x);
    }
 
    /*
     1 2
     1
     10 10
     */
 
 
    for(i=0; i<m; i++)
    {
        cin>>x;
        if(ms.size()>0)
        {
 
            auto it=ms.upper_bound(x);
            if(it!=ms.begin())
            {
                it--;
            }
 
            k=*it;
            if(k<=x)
            {
                ms.erase(it);
                vec.push_back(k);
            }
            else
            {
                vec.push_back(-1);
            }
 
        }
        else
        {
            vec.push_back(-1);
        }
    }
 
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
 
    return 0;
}
 
