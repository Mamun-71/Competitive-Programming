#include<bits/stdc++.h>
#define pi 3.141592653589793238
using namespace std;

int main()
{
    double r1,r2,r3,a,b,c,degree_r1,degree_r2,degree_r3,area_of_tringle,area_of_sectors,s,r,area_r1,area_r2,area_r3,area;
    int tc,cas=1;
    cin>>tc;
    while(tc--)
    {
        cin>>r1>>r2>>r3;

        ///Area of Trinagle
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2.0;
        r=s*(s-a)*(s-b)*(s-c);
        area_of_tringle=sqrt(r);

        ///Degree of sectors of circles

        r=(a*a)+(c*c)-(b*b);
        degree_r1=r/(2.0*a*c);
        degree_r1=acos(degree_r1);

        r=(a*a)+(b*b)-(c*c);
        degree_r2=r/(2.0*a*b);
        degree_r2=acos(degree_r2);

        r=(b*b)+(c*c)-(a*a);
        degree_r3=r/(2.0*b*c);
        degree_r3=acos(degree_r3);

        ///Area of Sectors of circles
        area_r1=0.5*degree_r1*(r1*r1);
        area_r2=0.5*degree_r2*(r2*r2);
        area_r3=0.5*degree_r3*(r3*r3);

        area_of_sectors=area_r1+area_r2+area_r3;

        ///Final Area
        area=area_of_tringle-area_of_sectors;

        
        printf("Case %d: %0.10lf\n",cas,area);
        cas++;

    }
    return 0;
}
