#include <bits/stdc++.h>
using namespace std;
struct Persona{
    string nombre;
    Persona(string n):nombre(n){}
    void saludar(){ cout<<"Hola, soy "<<nombre<<'\n'; }
};
int main(){
    unique_ptr<Persona> p=make_unique<Persona>("Mario");
    p->saludar();
}
