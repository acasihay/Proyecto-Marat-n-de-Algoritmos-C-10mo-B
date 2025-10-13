#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,W; cin>>n>>W;
    vector<int>w(n),v(n);
    for(int i=0;i<n;i++) cin>>w[i]>>v[i];
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i=1;i<=n;i++)
        for(int j=0;j<=W;j++)
            dp[i][j]= (w[i-1]<=j)? max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]):dp[i-1][j];
    cout<<dp[n][W]<<'\n';
}
