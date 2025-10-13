#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> s;
    int n,x; cin>>n;
    for(int i=0;i<n;i++){ cin>>x; s.insert(x); }
    cout<<"Elementos ordenados:\n";
    for(int y:s) cout<<y<<" ";
}
