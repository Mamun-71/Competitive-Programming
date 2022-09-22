#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,i,j,k,l,m,Ax,Bx,Cx,Dx,Ay,By,Cy,Dy;
    c=1;
    cin>>tc;
    while(tc--)
    {
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx=Ax+Cx-Bx;
        Dy=Ay+Cy-By;
        i=Dx-Ax;
        j=Ay-By;
        k=i*j;
        i=Ax-Bx;
        j=Dy-Ay;
        m=i*j;
        l=abs(k-m);
        cout<<"Case "<<c<<": "<<Dx<<" "<<Dy<<" "<<l<<endl;
        c++;
    }
    return 0;

}
