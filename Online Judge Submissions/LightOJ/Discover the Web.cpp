#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,k,l,m,n;
    string s;
    vector<string>vec;
    cin>>tc;
    for(i=1; i<=tc; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        s="http://www.lightoj.com/";
        vec.push_back(s);
        j=0;
        while(1)
        {
            cin>>s;
            if(s=="FORWARD")
            {
                l=vec.size()-1;
                if(l==j)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    j++;
                    cout<<vec[j]<<endl;
                }
            }
            else if(s=="BACK")
            {
                l=vec.size()-1;
                if(j==0)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    j--;
                    cout<<vec[j]<<endl;
                }
            }
            else if(s=="VISIT")
            {
                l=vec.size()-1;
                for(k=l; k>j; k--)
                {
                    vec.pop_back();
                }
                cin>>s;
                vec.push_back(s);
                j++;
                cout<<vec[j]<<endl;
            }
            else
            {
                break;
            }
        }
        vec.clear();
    }
    return 0;

}

