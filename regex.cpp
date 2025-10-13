#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,pat;
    getline(cin,text);
    getline(cin,pat);
    regex r(pat);
    sregex_iterator it(text.begin(),text.end(),r),end;
    for(;it!=end;++it) cout<<"Coincidencia: "<<it->str()<<'\n';
}
