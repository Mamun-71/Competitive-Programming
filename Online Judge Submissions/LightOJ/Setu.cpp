#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,k,l,sum=0,c=0;
    int arr[100];
    char s[10];
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>s;
            if(s[0]=='d')
            {
                cin>>k;
                sum=sum+k;
            }
            else
            {
                arr[c]=sum;
                c++;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(j=0;j<c;j++)
        {
            cout<<arr[j]<<endl;
        }
        sum=0;
        c=0;
    }
    return 0;
}
