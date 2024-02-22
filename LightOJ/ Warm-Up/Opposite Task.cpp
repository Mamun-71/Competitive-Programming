#include<stdio.h>
int main()
{
    int t,i,n,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("0 0\n");
        }
        else if(n==1)
        {
            printf("0 1\n");
        }
        else
        {
            x=n/2;
            printf("%d %d\n",n-x,x);
        }
    }
    return 0;
}
