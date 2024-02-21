#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
set<ll>range;
multiset<ll>ms;
set<ll>s;
 
int main()
{
    ll n,x,a,b,p,d1,d2,d,ans;
 
    scanf("%lld %lld",&x,&n);
    range.insert(0);
    range.insert(x);
    ms.insert(x);
 
    while(n--)
    {
 
        scanf("%lld",&p);
        auto it1=range.lower_bound(p);
        auto it2=range.upper_bound(p);
        it1--;
 
        a=*it1;
        b=*it2;
 
        d=b-a;
        d1=abs(a-p);
        d2=abs(b-p);
 
 
        auto it3=ms.find(d);
        ms.erase(it3);
        ms.insert(d1);
        ms.insert(d2);
 
        auto it=ms.end();
        it--;
        ans=*it;
 
        printf("%lld\n",ans);
 
        range.insert(p);
    }
    return 0;
}
 
