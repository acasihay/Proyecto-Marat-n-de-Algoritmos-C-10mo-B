#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
void fft(vector<complex<double>>&a,bool inv){
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        for(;j&bit;bit>>=1) j^=bit;
        j^=bit;
        if(i<j) swap(a[i],a[j]);
    }
    for(int len=2;len<=n;len<<=1){
        double ang=2*PI/len*(inv?-1:1);
        complex<double> wlen(cos(ang),sin(ang));
        for(int i=0;i<n;i+=len){
            complex<double> w(1);
            for(int j=0;j<len/2;j++){
                auto u=a[i+j], v=a[i+j+len/2]*w;
                a[i+j]=u+v; a[i+j+len/2]=u-v;
                w*=wlen;
            }
        }
    }
    if(inv) for(auto &x:a) x/=n;
}

int main(){
    int n; cin>>n;
    vector<complex<double>> a(n);
    for(int i=0;i<n;i++){ double x; cin>>x; a[i]=x; }
    fft(a,false);
    for(auto &x:a) cout<<x<<'\n';
}
