#include <bits/stdc++.h>
using namespace std;
long long potencia(long long a,long long b){ return b==0?1:a*potencia(a,b-1); }
int main(){
    long long a,b; cin>>a>>b;
    cout<<potencia(a,b)<<'\n';
}
