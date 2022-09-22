#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,r,i,count=0;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        while(n!=0)
        {
            r=n%2;
            if(r==1)
            {
                count++;
            }
            n=n/2;
        }
        if(count%2==0)
        {
            cout<<"Case "<<i<<": even"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": odd"<<endl;
        }
        count=0;
    }
    return 0;
}
