#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,k,l=0,p,q,count=0;
    int arr[30];
    cin>>tc;
    for(i=1; i<=tc; i++)
    {
        cin>>n>>p>>q;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for(j=0; j<n; j++)
        {
            l=l+arr[j];
            if(count==p)
            {
                break;
            }
            if(l>q)
            {
                break;
            }
            count++;
        }
        cout<<"Case "<<i<<": "<<count<<endl;
        count=0,l=0;
    }
    return 0;
}
