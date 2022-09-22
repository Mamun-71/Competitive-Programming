#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,i,j,k,l,d,x,y;
    int arr[105];
    int a[105];
    char s[5];
    cin>>tc;
    for(k=1; k<=tc; k++)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(j=0; j<m; j++)
        {
            cin>>s[0];
            if(s[0]=='S')
            {
                cin>>d;
                for(i=0; i<n; i++)
                {
                    arr[i]=arr[i]+d;
                }
            }
            else if(s[0]=='M')
            {
                cin>>d;
                for(i=0; i<n; i++)
                {
                    arr[i]=arr[i]*d;
                }
            }
            else if(s[0]=='D')
            {
                cin>>d;
                for(i=0; i<n; i++)
                {
                    arr[i]=arr[i]/d;
                }
            }
            else if(s[0]=='R')
            {
                for(i=0,l=n-1; i<n; i++,l--)
                {
                    a[i]=arr[l];
                }
                for(i=0; i<n; i++)
                {
                    arr[i]=a[i];
                }
            }
            else if(s[0]=='P')
            {
                cin>>x>>y;
                swap(arr[x],arr[y]);
            }
        }
        cout<<"Case "<<k<<":"<<endl;
        for(i=0;i<n-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
///idea was simply implement accroding to the statement.
///simply brute force method was applied.
