#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N = 1005;
char grid[MAX_N][MAX_N];
bool vis[MAX_N][MAX_N];
int n,m;
void dfs(int x,int y){
    if(x<0||x>=n||y<0||y>=m||grid[x][y]=='#'||vis[x][y])return;
    vis[x][y]=true;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    memset(vis,0,sizeof(vis));
    int rooms=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.'&&!vis[i][j]){
                dfs(i,j);
                rooms++;
            }
        }
    }
    cout<<rooms<<"\n";
    return 0;
}
