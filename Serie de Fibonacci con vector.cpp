#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<long long> f(n);
    f[0]=0; if(n>1) f[1]=1;
    for(int i=2;i<n;i++) f[i]=f[i-1]+f[i-2];
    for(long long x:f) cout<<x<<" ";
}
