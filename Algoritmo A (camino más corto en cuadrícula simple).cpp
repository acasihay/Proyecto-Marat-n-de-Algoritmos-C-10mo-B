#include <bits/stdc++.h>
using namespace std;
struct Node{int x,y,g,h;};
struct cmp{bool operator()(Node a,Node b){return a.g+a.h>b.g+b.h;}};
int main(){
    int n; cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>grid[i][j];
    pair<int,int> s={0,0},t={n-1,n-1};
    priority_queue<Node,vector<Node>,cmp> pq;
    vector<vector<int>> dist(n,vector<int>(n,1e9));
    dist[0][0]=0; pq.push({0,0,0,0});
    int dx[]={1,-1,0,0}, dy[]={0,0,1,-1};
    while(!pq.empty()){
        auto [x,y,g,h]=pq.top(); pq.pop();
        if(x==t.first&&y==t.second) break;
        for(int k=0;k<4;k++){
            int nx=x+dx[k],ny=y+dy[k];
            if(nx<0||ny<0||nx>=n||ny>=n||grid[nx][ny]==1) continue;
            int ng=g+1;
            if(ng<dist[nx][ny]){
                dist[nx][ny]=ng;
                int h=abs(t.first-nx)+abs(t.second-ny);
                pq.push({nx,ny,ng,h});
            }
        }
    }
    cout<<"Distancia minima: "<<dist[n-1][n-1]<<'\n';
}
