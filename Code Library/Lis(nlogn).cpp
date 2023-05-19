#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>elements;

    int n;
    cin>>n;

    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    elements.push_back(arr[0]);

    for(int i=1; i<n; i++)
    {
        int lo=0,mid;
        int hi=elements.size();

        if(elements.back()<arr[i])
        {
            elements.push_back(arr[i]);
            continue;
        }

        while(lo<hi)
        {
            mid=(lo+hi)/2;

            if(elements[mid]>=arr[i])
            {
                hi=mid;
            }
            else
            {
                lo=mid+1;
            }
        }

        elements[lo]=arr[i];
    }

    cout<<elements.size()<<endl;


}
