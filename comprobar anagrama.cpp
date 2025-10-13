#include <bits/stdc++.h>
using namespace std;
string norm(string s){
    string r;
    for(char c: s) if(!isspace(c)) r+=tolower(c);
    sort(r.begin(), r.end());
    return r;
}
int main(){
    string a,b; getline(cin,a); getline(cin,b);
    cout << (norm(a)==norm(b) ? "ANAGRAMA":"NO") << '\n';
    return 0;
}
