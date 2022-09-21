#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v1,v2,v3,a1,a2,s,d,h,k,t1,t2,t,d1,d2;
    int tc,c;
    cin>>tc;
    c=1;
    while(tc--)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        t=t1*t1;
        d1=((v1*t1)-(0.5*a1*t));
        t=t2*t2;
        d2=((v2*t2)-(0.5*a2*t));
        d=d1+d2;
        t=max(t1,t2);
        s=v3*t;
        printf("Case %d: %0.10lf %0.10lf\n",c,d,s);
        c++;
    }
    return 0;
}
