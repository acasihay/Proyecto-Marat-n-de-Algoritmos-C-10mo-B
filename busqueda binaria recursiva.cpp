#include <bits/stdc++.h>
using namespace std;

int busquedaBinaria(vector<int>&v, int l, int r, int x){
    if(l>r) return -1;
    int m=(l+r)/2;
    if(v[m]==x) return m;
    if(v[m]>x) return busquedaBinaria(v,l,m-1,x);
    return busquedaBinaria(v,m+1,r,x);
}

int main(){
    int n,x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<busquedaBinaria(v,0,n-1,x)<<'\n';
}
