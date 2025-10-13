#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; if(!(cin>>n)) return 0;
    unsigned long long f=1;
    for(int i=2;i<=n;i++) f*=i;
    cout<<f<<'\n';
    return 0;
}
