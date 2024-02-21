#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    int n;
 
    int arr[200005];
 
    memset(arr,0,sizeof arr);
 
    cin>>n;
 
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
 
    int ans;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
        {
            ans=i;
            break;
        }
    }
 
    cout<<ans<<endl;
