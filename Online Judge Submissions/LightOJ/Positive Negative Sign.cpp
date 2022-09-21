#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,c,n,m,j,x;
    cin>>tc;
    c=1;
    while(tc--)
    {
       cin>>n>>m;
       x=m*m;
       j=n/(2*m);
       x=x*j;
       cout<<"Case "<<c<<": "<<x<<endl;
       c++;
    }
    return 0;
}
