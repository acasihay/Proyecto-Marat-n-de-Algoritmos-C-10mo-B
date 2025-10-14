#include <bits/stdc++.h>
using namespace std;
bool pal(int n){ string s=to_string(n); string t=s; reverse(t.begin(),t.end()); return s==t; }
int main(){
    int a,b; cin>>a>>b;
    for(int i=a;i<=b;i++) if(pal(i)) cout<<i<<" ";
}
