#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int arr[1000005];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,root;
 
    memset(arr,0,sizeof arr);
 
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        root=sqrt(x);
 
        for(int j=1; j<=root; j++)
        {
            if(x%j==0)
            {
                int d=x/j;
 
                if(j==d)
                {
                    arr[d]++;
                }
                else
                {
                    arr[j]++;
                    arr[d]++;
                }
            }
        }
    }
 
    int ans=1;
    for(int i=1; i<=1000000; i++)
    {
        if(arr[i]>1)
        {
            ans=max(ans,i);
        }
    }
 
    cout<<ans<<endl;
 
    return 0;
}
 
