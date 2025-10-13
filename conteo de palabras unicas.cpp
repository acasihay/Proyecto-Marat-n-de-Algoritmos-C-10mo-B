#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> freq;
    string s;
    while(cin>>s) freq[s]++;
    for(auto &p:freq)
        cout<<p.first<<": "<<p.second<<'\n';
}
