#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){ return b==0?llabs(a):gcd(b,a%b); }
int main(){ long long a,b; if(!(cin>>a>>b)) return 0; cout<<gcd(a,b)<<'\n'; }
