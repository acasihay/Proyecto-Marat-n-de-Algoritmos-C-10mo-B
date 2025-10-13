#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    if(s.size()==0) { if(!getline(cin,s)) return 0; }
    reverse(s.begin(), s.end());
    cout<<s<<'\n';
    return 0;
}
