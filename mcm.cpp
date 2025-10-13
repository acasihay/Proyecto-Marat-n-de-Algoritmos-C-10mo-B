#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){ return b==0?llabs(a):gcd(b,a%b); }
int main(){
    long long a,b; if(!(cin>>a>>b)) return 0;
    long long g = gcd(a,b);
    long double l = (long double)llabs(a)/g*llabs(b);
    cout<< (unsigned long long) l <<'\n';
    return 0;
}
