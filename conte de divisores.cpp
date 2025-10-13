#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; if(!(cin>>n)) return 0;
    n = llabs(n);
    int cnt=0;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){ cnt += (i*i==n?1:2); }
    }
    cout<<cnt<<'\n';
    return 0;
}
