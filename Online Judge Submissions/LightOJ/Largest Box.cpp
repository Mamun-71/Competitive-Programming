#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tc,cas;
    double w,l;

    cas=0;
    cin>>tc;

    while(tc--)
    {
        cas++;

        cin>>l>>w;

        double x=l+w-sqrt((l*l)+(w*w)-(l*w));
        x=x/6.0;

        double v=(l-(2.0*x))*(w-(2.0*x))*x;

        printf("Case %d: %0.10lf\n",cas,v);
    }

    return 0;

}
