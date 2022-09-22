#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,c,n,m,i,j,k,l,x,y;
    int arr[200005];
    int chk[200005];
    vector<int>vec;
    cin>>tc;
    c=1;
    while(tc--)
    {
        cin>>n;
        l=200000;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<=l;i++)
        {
            chk[i]=0;
        }
        for(i=n-1;i>=0;i--)
        {
            x=arr[i];
            k=abs(x);
            if(chk[k]==0)
            {
               vec.push_back(x);
               chk[k]=1;
            }
        }
        x=0;
        for(i=0;i<vec.size();i++)
        {
            x=x+vec[i];
        }
        cout<<"Case "<<c<<": "<<x<<endl;
        c++;
        vec.clear();
    }
    return 0;
}
