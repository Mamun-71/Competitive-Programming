#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,cas,i,j,k,l,a,b,c,p1,p2;
    vector<int>vec;
    string s[105];
    string chor;
    string kom;
    cin>>tc;
    cas=1;
    while(tc--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>a>>b>>c;
            k=a*b*c;
            vec.push_back(k);
        }
        j=0,k=10000000;
        for(i=0;i<n;i++)
        {
            if(vec[i]>j)
            {
                j=vec[i];
                p1=i;
            }
            if(vec[i]<k)
            {
                k=vec[i];
                p2=i;
            }
        }
        chor=s[p1];
        kom=s[p2];
        if(p1==p2)
        {
            cout<<"Case "<<cas<<": no thief"<<endl;
        }
        else
        {
           cout<<"Case "<<cas<<": "<<chor<<" took chocolate from "<<kom<<endl;
        }
        cas++;
        vec.clear();
    }
    return 0;

}
