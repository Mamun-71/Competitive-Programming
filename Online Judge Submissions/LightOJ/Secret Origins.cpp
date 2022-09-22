#include<bits/stdc++.h>
using namespace std;
long long int pow(long long int x)
{
    long long int i,j,k,res=1;
    for(i=1;i<=x;i++)
    {
        res=res*2;
    }
    return res;
}
int main()
{
    long long int tc,n,m,c,r,i,j,k,l,x,y,zero,one,sign;
    vector<long long int>vec;
    vector<long long int>temp;
    cin>>tc;
    c=1;
    while(tc--)
    {
        cin>>n;
        while(n!=0)
        {
            r=n%2;
            n=n/2;
            temp.push_back(r);
        }
        l=temp.size()-1;
        zero=0,one=0;
        for(i=l;i>=0;i--)
        {
            x=temp[i];
            vec.push_back(x);
            if(x==0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        sign=-1;
        for(i=vec.size()-1;i>=1;i--)
        {
            if(vec[i]==1&&vec[i-1]==0)
            {
                vec[i]=0;
                vec[i-1]=1;
                j=i;
                sign=1;
                break;
            }
        }
        if(sign==-1)
        {
            zero++;
            vec.clear();
            vec.push_back(1);
            while(zero--)
            {
                vec.push_back(0);
            }
            one--;
            while(one--)
            {
                vec.push_back(1);
            }
        }
        else
        {
            zero=0;
            one=0;
            l=vec.size();
            for(i=j;i<l;i++)
            {
                if(vec[i]==0)
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
            k=zero+one;
            while(k--)
            {
                vec.pop_back();
            }
            while(zero--)
            {
                vec.push_back(0);
            }
            while(one--)
            {
                vec.push_back(1);
            }
        }
        l=vec.size();
        n=0;
        for(i=0;i<vec.size();i++)
        {
            l--;
            if(vec[i]==0) continue;
            n=n+pow(l);
        }
        cout<<"Case "<<c<<": "<<n<<endl;
        temp.clear();
        vec.clear();
        c++;
    }
    return 0;
}
