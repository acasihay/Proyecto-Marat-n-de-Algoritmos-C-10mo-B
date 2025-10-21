#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n;
    vector<int> v(n); for(int &a:v) cin>>a;
    cin>>x;
    auto it=find(v.begin(),v.end(),x);
    cout<<(it!=v.end()? "Encontrado":"No encontrado")<<'\n';
}
