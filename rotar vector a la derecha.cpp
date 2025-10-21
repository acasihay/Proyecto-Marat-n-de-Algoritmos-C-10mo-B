#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n); for(int &x:v) cin>>x;
    rotate(v.rbegin(),v.rbegin()+k%n,v.rend());
    for(int x:v) cout<<x<<" ";
}
