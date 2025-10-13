#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    if(s.size()==0) { if(!getline(cin,s)) return 0; } // si la primera getline es vacía
    int cnt=0;
    for(char c: s){ c=tolower(c); if(string("aeiou").find(c)!=string::npos) cnt++; }
    cout<<cnt<<'\n';
    return 0;
}
