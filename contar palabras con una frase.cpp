#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string w; int c=0;
    while(ss>>w) c++;
    cout<<"Palabras: "<<c<<'\n';
}
