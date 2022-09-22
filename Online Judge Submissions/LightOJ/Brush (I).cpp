#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,k,sum=0;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>k;
            if(k>0)
            {
                sum=sum+k;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
    }
    return 0;
}
