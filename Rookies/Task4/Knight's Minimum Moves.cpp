#include<bits/stdc++.h>
using namespace std;
#define int long long

int bfs(string s,string d){
    queue<pair<string,int>>q;
    map<string,bool>vis;
    q.push({s,0});
    vis[s]=true;
    int dx[]={-2,-2,-1,-1,1,1,2,2};
    int dy[]={-1,1,-2,2,-2,2,-1,1};

    while(!q.empty()){
        string curr=q.front().first;
        int moves=q.front().second;
        q.pop();

        if(curr==d)return moves;

        for(int i=0;i<8;i++){
            char newX=curr[0]+dx[i];
            char newY=curr[1]+dy[i];

            string next={newX,newY};

            if(newX>='a'&&newX<='h'&&newY>='1'&&newY<='8'&&!vis[next]){
                q.push({next,moves+1});
                vis[next]=true;
            }
        }
    }
    return -1;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--){
        string s,d;
        cin>>s>>d;
        cout<<bfs(s,d)<<"\n";
    }
    return 0;
}
