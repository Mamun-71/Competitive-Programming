#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,k,l;
    vector<int>result;
    result.push_back(1);
    for(i=2;i<=32;i++)
    {
        l=0;
        for(j=1000;j>=2;j--)
        {
            l=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    l++;
                }
            }
            if(l==i)
            {
                result.push_back(j);
            }
        }
    }
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<result[n-1]<<endl;
    }
    return 0;
}
