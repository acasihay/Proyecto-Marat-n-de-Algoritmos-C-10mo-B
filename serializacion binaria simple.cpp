#include <bits/stdc++.h>
using namespace std;
struct Data{int id; double valor;};

int main(){
    vector<Data> datos={{1,2.5},{2,7.8}};
    ofstream out("data.bin",ios::binary);
    for(auto &d:datos) out.write((char*)&d,sizeof(d));
    out.close();

    ifstream in("data.bin",ios::binary);
    Data d;
    while(in.read((char*)&d,sizeof(d)))
        cout<<d.id<<" -> "<<d.valor<<'\n';
}
