#include <bits/stdc++.h>
using namespace std;

void hanoi(int n,char from,char aux,char to){
    if(n==0) return;
    hanoi(n-1,from,to,aux);
    cout<<from<<" -> "<<to<<'\n';
    hanoi(n-1,aux,from,to);
}

int main(){
    int n; cin>>n;
    hanoi(n,'A','B','C');
}
