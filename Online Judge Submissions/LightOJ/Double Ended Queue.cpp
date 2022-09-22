#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,o,i,j,k,s,c,p;
    string str;
    list<int>q;
    list<int>::iterator it;
    cin>>tc;
    for(c=1; c<=tc; c++)
    {
        cout<<"Case "<<c<<":"<<endl;
        cin>>s>>p;
        while(p--)
        {
            cin>>str;
            if(str=="pushLeft")
            {
                cin>>k;
                if(q.size()==s)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    q.push_front(k);
                    cout<<"Pushed in left: "<<k<<endl;
                }

            }
            else if(str=="pushRight")
            {
                cin>>k;
                if(q.size()==s)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    q.push_back(k);
                    cout<<"Pushed in right: "<<k<<endl;
                }

            }
            else if(str=="popLeft")
            {
                if(q.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    it=q.begin();
                    cout<<"Popped from left: "<<*it<<endl;
                    q.pop_front();
                }
            }
            else
            {
                if(q.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    it=q.end();
                    it--;
                    cout<<"Popped from right: "<<*it<<endl;
                    q.pop_back();
                }
            }
        }
        q.clear();
    }
    return 0;
}
