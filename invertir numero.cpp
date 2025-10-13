#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; if(!(cin>>n)) return 0;
    bool neg = n<0; n = llabs(n);
    long long r=0;
    while(n){ r = r*10 + n%10; n/=10; }
    if(neg) cout<<'-';
    cout<<r<<'\n';
    return 0;
}
