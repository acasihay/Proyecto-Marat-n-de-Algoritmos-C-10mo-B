#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>&v,int l,int r){
    if(l>=r) return;
    int piv=v[(l+r)/2];
    int i=l,j=r;
    while(i<=j){
        while(v[i]<piv) i++;
        while(v[j]>piv) j--;
        if(i<=j) swap(v[i++],v[j--]);
    }
    quickSort(v,l,j);
    quickSort(v,i,r);
}

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    quickSort(v,0,n-1);
    for(int x:v) cout<<x<<' ';
}
