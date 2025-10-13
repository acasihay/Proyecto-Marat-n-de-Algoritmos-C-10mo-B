#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,p=0,ne=0,z=0; cin>>n;
    for(int i=0;i<n;i++){ cin>>x; if(x>0)p++; else if(x<0)ne++; else z++; }
    cout<<p<<" "<<ne<<" "<<z<<'\n';
}
