#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    double r,k,l,pi=2*acos(0.0);
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>r;
        l=r*2;
        l=l*l;
        k=pi*r*r;
        l=l-k;
        printf("Case %d: %0.2lf\n",i,l);
    }
    return 0;
}
