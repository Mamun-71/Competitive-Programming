#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    double ox,oy,ax,ay,bx,by,j,k,l,m,n,r,ab;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        j=ox-ax;
        k=oy-ay;
        r=pow(j,2.0)+pow(k,2.0);
        j=ax-bx;
        k=ay-by;
        ab=pow(j,2.0)+pow(k,2.0);
        n=2*r;
        m=ab;
        l=1-(m/n);
        l=acos(l);
        r=sqrt(r);
        l=l*r;
        printf("Case %d: %0.8lf\n",i,l);
    }
    return 0;
}
