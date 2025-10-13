#include <bits/stdc++.h>
using namespace std;
long long powll(long long a,long long b){
    long long res=1;
    while(b){ if(b&1) res*=a; a*=a; b>>=1; }
    return res;
}
int main(){ long long a,b; if(!(cin>>a>>b)) return 0; cout<<powll(a,b)<<'\n'; }
