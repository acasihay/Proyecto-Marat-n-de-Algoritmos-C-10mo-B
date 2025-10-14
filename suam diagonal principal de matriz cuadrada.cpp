#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    int s=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){ cin>>a[i][j]; if(i==j)s+=a[i][j]; }
    cout<<s<<'\n';
}
