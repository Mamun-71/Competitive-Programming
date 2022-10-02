#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define LIM 1000003
using namespace std ;
 
ll fact[1000005];
 
void FactGenerate()
{
    ll x=1;
    fact[0]=1;
    for(ll i=1; i<=LIM; i++)
    {
        x=(x*i)%mod;
        fact[i]=x;
    }
}
 
ll bigmod(ll a,ll b)
{
    ll x;
 
    if(b==0) return 1;
 
    if(b%2==0)
    {
        x=bigmod(a,b/2)%mod;
        x=(x*x)%mod;
 
        return x;
    }
    else
    {
        x=bigmod(a,b-1)%mod;
        x=(x*a)%mod;
 
        return x;
    }
}
 
void f(ll up, ll down)
{
 
    down=bigmod(down,mod-2)%mod;
    down+=mod;
    down%mod;
 
    cout<<(up*down)%mod<<endl;
}
 
int main()
{
    FactGenerate();
    string s;
    ll arr[200];
    vector<ll>vec;
    ll n,up,down;
 
    memset(arr,0,sizeof arr);
 
    cin>>s;
 
    for(ll i=0; i<s.size(); i++)
    {
        ll x=s[i]-'a';
        arr[x]++;
    }
 
 
    n=s.size();
    up=fact[n];
 
    for(ll i=0; i<26; i++)
    {
        if(arr[i]>0)
        {
            vec.push_back(arr[i]);
        }
    }
 
    down=1;
    for(ll i=0; i<vec.size(); i++)
    {
        ll x=vec[i];
        down=(down*fact[x])%mod;
    }
 
    f(up,down);
 
    return 0;
}
