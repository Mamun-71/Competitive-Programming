#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    string s;
 
    int i,j,ans;
    cin>>s;
 
    ans=1;
 
    i=0;
    while(i<s.size())
    {
        int k=0;
 
        for(j=i; j<s.size(); j++)
        {
            if(s[i]==s[j])
            {
                k++;
            }
            else
            {
                break;
            }
        }
 
        i=j;
 
        ans=max(ans,k);
    }
 
    cout<<ans<<endl;
 
    return 0;
}
