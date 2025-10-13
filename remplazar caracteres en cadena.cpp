#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; if(!getline(cin,s)) return 0;
    char a,b; if(!(cin>>a>>b)) return 0;
    for(char &c: s) if(c==a) c=b;
    cout<<s<<'\n';
    return 0;
}
