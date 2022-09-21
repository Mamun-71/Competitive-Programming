#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,year1,year2,i,j,k,l,x,ans,cas;
    string month1,month2,date1,date2;
    cin>>tc;
    cas=1;
    while(tc--)
    {
        cin>>month1>>date1>>year1;
        cin>>month2>>date2>>year2;
        x=year2-year1;
        if(x==0)
        {
            ans=0;
            if(month1=="January"||month1=="February")
            {
                if(month2=="January")
                {
                    ans=0;
                }
                else if(month2=="February")
                {
                    if(date2[0]=='2'&&date2[1]=='9')
                    {
                        ans++;
                    }
                }
                else
                {
                    if(year1%100==0&&year1%400==0)
                    {
                        ans++;
                    }
                    else if(year1%100!=0&&year1%4==0)
                    {
                        ans++;
                    }
                }
            }
        }
        else if(x<1000)
        {
            if(month1=="January")
            {
                year1=year1;
            }
            else if(month1=="February")
            {
                year1=year1;
            }
            else
            {
                year1++;
            }


            if(month2=="January")
            {
                year2--;
            }
            else if(month2=="February")
            {
                if(date2[0]=='2'&&date2[1]=='9')
                {
                    year2=year2;
                }
                else
                {
                    year2--;
                }
            }

            ans=0;
            while(year1<=year2)
            {
                if(year1%100==0&&year1%400==0)
                {
                    ans++;
                }
                else if(year1%100!=0&&year1%4==0)
                {
                    ans++;
                }
                year1++;
            }

        }
        else
        {
            if(month1=="January")
            {
                year1=year1;
            }
            else if(month1=="February")
            {
                year1=year1;
            }
            else
            {
                year1++;
            }


            if(month2=="January")
            {
                year2--;
            }
            else if(month2=="February")
            {
                if(date2[0]=='2'&&date2[1]=='9')
                {
                    year2=year2;
                }
                else
                {
                    year2--;
                }
            }

            ans=0;
            while(1)
            {
                if(year1%100==0&&year1%400==0)
                {
                    break;
                }
                else if(year1%100!=0&&year1%4==0)
                {
                    ans++;
                }
                year1++;
            }

            while(1)
            {
                if(year2%100==0&&year2%400==0)
                {
                    break;
                }
                else if(year2%100!=0&&year2%4==0)
                {
                    ans++;
                }
                year2--;
            }

            x=year2-year1;
            j=(x/100)*24;
            ans=ans+j;
            j=(x/400)+1;
            ans=ans+j;
        }
        cout<<"Case "<<cas<<": "<<ans<<endl;
        cas++;
    }
    return 0;
}
