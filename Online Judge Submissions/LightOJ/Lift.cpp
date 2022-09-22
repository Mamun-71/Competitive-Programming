#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,k,l;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n>>l;
        if(l>=n)
        {
            k=l-n;
            k=k+n;
            k=k*4;
            k=k+19;
        }
        else
        {
            k=n-l;
            k=k+n;
            k=k*4+19;

        }
        cout<<"Case "<<i<<": "<<k<<endl;
    }
    return 0;
}
