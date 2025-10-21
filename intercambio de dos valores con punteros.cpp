#include <bits/stdc++.h>
using namespace std;
void swapP(int *a,int *b){int t=*a; *a=*b; *b=t;}
int main(){
    int x,y; cin>>x>>y;
    swapP(&x,&y);
    cout<<x<<" "<<y<<'\n';
}
