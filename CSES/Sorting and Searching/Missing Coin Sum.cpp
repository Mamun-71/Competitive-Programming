#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i,j,k,x,sum;
    vector<ll>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
 
    sort(vec.begin(),vec.end());
 
    sum=0;
    for(i=0; i<vec.size(); i++)
    {
        x=vec[i];
        k=x-sum;
        if(k<=1)
        {
            sum+=x;
        }
        else
        {
            break;
        }
    }
    sum++;
 
    cout<<sum<<endl;
 
    return 0;
 
}
