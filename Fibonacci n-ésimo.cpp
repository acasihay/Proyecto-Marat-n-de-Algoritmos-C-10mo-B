#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; if(!(cin>>n)) return 0;
    if(n==0){ cout<<0<<'\n'; return 0; }
    long long a=0,b=1;
    for(int i=2;i<=n;i++){ long long c=a+b; a=b; b=c; }
    cout<<(n==1?1:b)<<'\n';
    return 0;
}
