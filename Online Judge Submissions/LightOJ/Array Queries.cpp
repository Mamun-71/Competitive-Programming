#include<bits/stdc++.h>
#define inf 10000000
#define Lim 100000
#define left st,(st+en)/2,nd+nd
#define right ((st+en)/2)+1,en,nd+nd+1
using namespace std;

int arr[Lim+5];
int tree[4*Lim+5];

void build(int st, int en, int nd)
{

    if(st==en)
    {
        tree[nd]=arr[st];
        return ;
    }

    build(left);
    build(right);

    tree[nd]=min(tree[nd+nd],tree[nd+nd+1]);

}

int query(int st, int en, int nd, int L, int R)
{
    if(en<L||R<st) return inf;

    if(L<=st&&en<=R) return tree[nd];

    return min(query(left,L,R),query(right,L,R));

}

int main()
{
    int tc,n,q,L,R,cas=0;

    scanf("%d",&tc);

    while(tc--)
    {
        cas++;
        scanf("%d %d",&n,&q);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        build(0,n-1,1);



        printf("Case %d:\n",cas);
        while(q--)
        {
            int ans;

            scanf("%d %d",&L,&R);
            ans=query(0,n-1,1,L-1,R-1);

            printf("%d\n",ans);
        }


    }

    return 0;

}
