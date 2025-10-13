#include <bits/stdc++.h>
using namespace std;

struct Nodo{
    int val;
    Nodo *izq,*der;
    Nodo(int v):val(v),izq(nullptr),der(nullptr){}
};

Nodo* insertar(Nodo* r,int v){
    if(!r) return new Nodo(v);
    if(v<r->val) r->izq=insertar(r->izq,v);
    else r->der=insertar(r->der,v);
    return r;
}

void inorder(Nodo* r){
    if(!r) return;
    inorder(r->izq);
    cout<<r->val<<" ";
    inorder(r->der);
}

int main(){
    int n; cin>>n;
    Nodo* raiz=nullptr;
    for(int i=0;i<n;i++){ int x; cin>>x; raiz=insertar(raiz,x); }
    inorder(raiz);
}
