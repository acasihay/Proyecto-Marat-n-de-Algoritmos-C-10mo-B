#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; if(!(cin>>n)) return 0;
    n = llabs(n);
    long long s=0;
    while(n){ s += n%10; n/=10; }
    cout<<s<<'\n';
    return 0;
}
