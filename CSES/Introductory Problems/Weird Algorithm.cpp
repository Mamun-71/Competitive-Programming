#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n;
 
    vector<ll>vec;
 
    cin>>n;
    vec.push_back(n);
 
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=n*3+1;
        }
 
        vec.push_back(n);
    }
 
    for(ll i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
