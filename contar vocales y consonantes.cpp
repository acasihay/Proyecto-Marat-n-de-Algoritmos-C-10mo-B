#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    int v=0,c=0;
    for(char ch:s){
        if(isalpha(ch)){
            char x=tolower(ch);
            if(string("aeiou").find(x)!=string::npos) v++; else c++;
        }
    }
    cout<<"Vocales:"<<v<<" Consonantes:"<<c<<'\n';
}
