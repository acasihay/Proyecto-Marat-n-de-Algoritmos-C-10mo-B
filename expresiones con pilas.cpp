#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    stack<int> st;
    string tok;
    while(ss>>tok){
        if(isdigit(tok[0])) st.push(stoi(tok));
        else{
            int b=st.top(); st.pop();
            int a=st.top(); st.pop();
            if(tok=="+") st.push(a+b);
            else if(tok=="-") st.push(a-b);
            else if(tok=="*") st.push(a*b);
            else if(tok=="/") st.push(a/b);
        }
    }
    cout<<st.top()<<'\n';
}
