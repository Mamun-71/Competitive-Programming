#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll X,Y;

ll Extended_Gcd(ll a,ll b)
{
    /// ax+by=gcd(a,b) finding of valid x,y

    ll x1,x2,y1,y2,r,r1,r2,q,g;
    
    x1=1,y1=0;
    x2=0,y2=1;
    r1=a,r2=b;
    
    while(r1!=0)
    {
       q=r2/r1;
       r=r2%r1;

       X=x2-(q*x1);
       Y=y2-(q*y1);

       r2=r1;
       r1=r;

       x2=x1;
       x1=X;

       y2=y1;
       y1=Y;
    }
    g=r2;
    X=x2,Y=y2;
    return g;
}

int main()
{
    ll a,b,g;

    cin>>a>>b;
    g=Extended_Gcd(a,b);

    cout<<g<<endl;
    cout<<X<<" "<<Y<<endl;

    return 0;
}
