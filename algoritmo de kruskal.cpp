#include <bits/stdc++.h>
using namespace std;
struct Edge{int u,v,w;};
struct DSU{
    vector<int> p;
    DSU(int n){p.resize(n+1); iota(p.begin(),p.end(),0);}
    int f(int x){return p[x]==x?x:p[x]=f(p[x]);}
    bool unite(int a,int b){a=f(a);b=f(b); if(a==b) return 0; p[a]=b; return 1;}
};

int main(){
    int n,m; cin>>n>>m;
    vector<Edge> e(m);
    for(auto &x:e) cin>>x.u>>x.v>>x.w;
    sort(e.begin(),e.end(),[](auto &a,auto &b){return a.w<b.w;});
    DSU d(n);
    int total=0;
    for(auto &x:e) if(d.unite(x.u,x.v)) total+=x.w;
    cout<<"Costo MST: "<<total<<'\n';
}
