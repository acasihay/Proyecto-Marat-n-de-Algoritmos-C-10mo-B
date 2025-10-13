#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> vis;

void dfs(int u){
    vis[u]=1;
    cout<<u<<" ";
    for(int v:adj[u]) if(!vis[v]) dfs(v);
}

int main(){
    int n,m; cin>>n>>m;
    adj.assign(n+1,{});
    vis.assign(n+1,0);
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
}
