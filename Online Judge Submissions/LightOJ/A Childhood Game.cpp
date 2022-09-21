#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tc,n,cas=0,x;
    string s,r;

    cin>>tc;
    while(tc--)
    {
        cas++;
        cin>>n>>s;

        if(s=="Alice")
        {
            x=n-1;
            if(x%3==0)
            {
                r="Bob";
            }
            else
            {
                r="Alice";
            }
        }
        else
        {
            if(n%3==0)
            {
                r="Alice";
            }
            else
            {
                r="Bob";
            }
        }

        cout<<"Case "<<cas<<": "<<r<<endl;
    }

    return 0;

}
