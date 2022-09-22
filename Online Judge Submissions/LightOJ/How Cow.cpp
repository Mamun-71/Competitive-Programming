#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x1,x2,y1,y2,x,y,a,b,c,d,i,m,j,k,l;
    int arr[100];
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        a=min(x1,x2);
        b=max(x1,x2);
        c=min(y1,y2);
        d=max(y1,y2);
        cin>>m;
        for(j=0;j<m;j++)
        {
            arr[j]=0;
        }
        for(j=0;j<m;j++)
        {
            cin>>x>>y;
            if(x>=a&&x<=b&&y>=c&&y<=d)
            {
                arr[j]=1;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(j=0;j<m;j++)
        {
            if(arr[j]==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
