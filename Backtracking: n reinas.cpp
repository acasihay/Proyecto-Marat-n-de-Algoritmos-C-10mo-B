#include <bits/stdc++.h>
using namespace std;
int n; vector<int> col;
int sol=0;

bool ok(int r,int c){
    for(int i=0;i<r;i++)
        if(col[i]==c || abs(col[i]-c)==abs(i-r)) return false;
    return true;
}

void nqueens(int r){
    if(r==n){ sol++; return; }
    for(int c=0;c<n;c++)
        if(ok(r,c)){ col[r]=c; nqueens(r+1); }
}

int main(){
    cin>>n; col.assign(n,0);
    nqueens(0);
    cout<<"Soluciones: "<<sol<<'\n';
}
