#include <bits/stdc++.h>
using namespace std;
template<typename T>
T mayorValor(T a,T b){ return a>b?a:b; }

int main(){
    cout<<mayorValor(7,3)<<'\n';
    cout<<mayorValor(5.9,7.2)<<'\n';
    cout<<mayorValor(string("hola"),string("adios"))<<'\n';
}
