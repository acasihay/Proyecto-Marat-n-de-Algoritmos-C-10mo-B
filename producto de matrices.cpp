#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p; cin>>n>>m>>p;
    vector<vector<int>> A(n,vector<int>(m)), B(m,vector<int>(p)), C(n,vector<int>(p));
    for(auto &r:A) for(auto &x:r) cin>>x;
    for(auto &r:B) for(auto &x:r) cin>>x;
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
            for(int k=0;k<m;k++)
                C[i][j]+=A[i][k]*B[k][j];
    for(auto &r:C){ for(int x:r) cout<<x<<" "; cout<<'\n'; }
}
