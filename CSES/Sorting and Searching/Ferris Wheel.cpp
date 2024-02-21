#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n,m,x,i,j,l,k;
    vector<ll>vec;
    cin>>n>>x;
 
    for(i=0; i<n; i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
 
    i=0,j=n-1;
 
    m=0;
    while(i<j)
    {
        k=vec[i]+vec[j];
        if(k<=x)
        {
            m++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
 
    l=n-m;
    cout<<l<<endl;
    return 0;
}
