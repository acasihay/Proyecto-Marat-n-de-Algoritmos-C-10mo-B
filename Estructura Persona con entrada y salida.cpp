#include <bits/stdc++.h>
using namespace std;
struct Persona{string nombre; int edad;};
int main(){
    int n; cin>>n;
    vector<Persona> v(n);
    for(int i=0;i<n;i++) cin>>v[i].nombre>>v[i].edad;
    for(auto &p:v) cout<<p.nombre<<" ("<<p.edad<<")\n";
}
