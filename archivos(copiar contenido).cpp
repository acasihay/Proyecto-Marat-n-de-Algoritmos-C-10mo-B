#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("entrada.txt");
    ofstream out("salida.txt");
    string line;
    while(getline(in,line)) out<<line<<'\n';
    cout<<"Archivo copiado.\n";
}
