#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
const int INF = 1e9;

int main(){
    int n,m; cin>>n>>m;
    vector<vector<pii>> adj(n+1);
    for(int i=0;i<m;i++){
        int a,b,w; cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    int src; cin>>src;
    vector<int> dist(n+1,INF);
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[src]=0; pq.push({0,src});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if(d>dist[u]) continue;
        for(auto [v,w]:adj[u])
            if(dist[v]>d+w){
                dist[v]=d+w;
                pq.push({dist[v],v});
            }
    }
    for(int i=1;i<=n;i++)
        cout<<"Distancia a "<<i<<": "<<dist[i]<<'\n';
}
