#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,n,i,x,c,dif,k;
    ll arr[1005];
    cin>>tc;
    c=0;
    while(tc--)
    {
        c++;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        k=2;
        x=0;
        for(i=0; i<n; i++)
        {
            if(arr[i]>k)
            {
                dif=arr[i]-k;
                if(dif>5)
                {
                    if(dif%5==0)
                    {
                        x=x+dif/5;
                    }
                    else
                    {
                        x=x+(dif/5)+1;
                    }
                }
                else
                {
                    x++;
                }

            }
            k=arr[i];
        }

        cout<<"Case "<<c<<": "<<x<<endl;
    }
    return 0;
}

