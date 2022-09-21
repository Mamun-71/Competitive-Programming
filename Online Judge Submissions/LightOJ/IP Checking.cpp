#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,a,b,i,j,k,l,r,sign=1;
    int arr[4];
    char x[8];
    char c[8];
    string s;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>arr[0]>>c[0]>>arr[1]>>c[1]>>arr[2]>>c[2]>>arr[3];
        cin>>s;
        l=0;
        for(j=0;j<4;j++)
        {
            n=arr[j];
            for(k=7;k>=0;k--)
            {
                if(n%2==1)
                {
                    x[k]='1';
                }
                else
                {
                    x[k]='0';
                }
                n=n/2;
            }
            for(a=0,b=l;a<8;a++,b++)
            {
                if(s[b]!=x[a])
                {
                    sign=-1;
                    break;
                }
            }
            if(sign==-1)
            {
                break;
            }
            l=b+1;
        }
        if(sign==-1)
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        sign=1;
    }
    return 0;
}
