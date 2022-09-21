#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int cas=0,tc,n,d;

    cin>>tc;
    while(tc--)
    {
        cas++;
        cin>>n>>d;

        int x=d,k=1;

        while(1)
        {
            if(x%n==0)
            {
                break;
            }
            x=x%n;

            x=x*10+d;
            k++;
        }

        cout<<"Case "<<cas<<": "<<k<<endl;
    }

    return 0;
}
