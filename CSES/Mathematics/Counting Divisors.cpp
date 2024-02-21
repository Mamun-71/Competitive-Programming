#include<bits/stdc++.h>
using namespace std;
int arr[10000005];
int res[10000500];
vector<int>prime;
void seive()
{
    int i,j,k,l,n,m,root;
    n=10000000;
    for(i=3; i<=n; i+=2)
    {
        arr[i]=0;
    }
    root=sqrt(n);
    for(i=3; i<=root; i+=2)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=n; j+=2*i)
            {
                arr[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<=n; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
 
}
long long int nod(long long int n)
{
    long long int root,i,j,l,res,count;
    root=sqrt(n);
    res=1;
    for(i=0;i<prime.size()&&prime[i]<=root;i++)
    {
        if(n%prime[i]==0)
        {
            count=1;
            while(n%prime[i]==0)
            {
                count++;
                n=n/prime[i];
            }
            root=sqrt(n);
            res=res*count;
        }
    }
    if(n!=1)
    {
        res=res*2;
    }
    return res;
}
 
int main()
{
    int tc,n,i,m,j,k,root;
    seive();
 
    n=1000000;
    for(i=1; i<=n; i++)
    {
        res[i]=nod(i);
    }
    cin>>tc;
 
    while(tc--)
    {
        cin>>i;
        cout<<res[i]<<endl;
    }
    return 0;
}
