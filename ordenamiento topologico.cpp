#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> indeg(n,0);
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        indeg[b]++;
    }
    queue<int> q;
    for(int i=0;i<n;i++) if(!indeg[i]) q.push(i);
    vector<int> topo;
    while(!q.empty()){
        int u=q.front(); q.pop();
        topo.push_back(u);
        for(int v:adj[u]) if(--indeg[v]==0) q.push(v);
    }
    for(int x:topo) cout<<x<<" ";
}
