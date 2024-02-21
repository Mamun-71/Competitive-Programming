#include<bits/stdc++.h>
using namespace std;
 
int n,m;
char grid[1005][1005];
int vis[1005][1005];
 
int dirX[] = {1,-1,0,0};
int dirY[] = {0,0,1,-1};
 
void dfs(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m) return ;
    if(grid[x][y]=='#' || vis[x][y]==1) return ;
 
    vis[x][y]=1;
 
    for(int i=0; i<4; i++)
    {
        int xx,yy;
        xx = x+dirX[i];
        yy = y+dirY[i];
        dfs(xx,yy);
    }
}
 
int main()
{
     cin>>n>>m;
 
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             cin>>grid[i][j];
         }
     }
 
     memset(vis,-1,sizeof vis);
     int ans=0;
 
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             if(grid[i][j]=='.' && vis[i][j]==-1)
             {
                 ans++;
                 dfs(i,j);
             }
         }
     }
 
     cout<<ans<<endl;
 
     return 0;
}
