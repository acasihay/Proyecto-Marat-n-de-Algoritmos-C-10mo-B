#include <bits/stdc++.h>
using namespace std;

double det(vector<vector<double>> a){
    int n=a.size();
    if(n==1) return a[0][0];
    if(n==2) return a[0][0]*a[1][1]-a[0][1]*a[1][0];
    double ans=0;
    for(int p=0;p<n;p++){
        vector<vector<double>> m(n-1,vector<double>(n-1));
        for(int i=1;i<n;i++){
            int col=0;
            for(int j=0;j<n;j++) if(j!=p) m[i-1][col++]=a[i][j];
        }
        ans += (p%2==0?1:-1)*a[0][p]*det(m);
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<vector<double>> a(n,vector<double>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    cout<<fixed<<setprecision(3)<<det(a)<<'\n';
}
