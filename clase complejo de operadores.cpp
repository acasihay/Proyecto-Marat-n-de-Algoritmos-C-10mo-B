#include <bits/stdc++.h>
using namespace std;

struct Complejo{
    double re,im;
    Complejo(double r=0,double i=0):re(r),im(i){}
    Complejo operator+(const Complejo&o)const{return {re+o.re,im+o.im};}
    Complejo operator*(const Complejo&o)const{return {re*o.re-im*o.im,re*o.im+im*o.re};}
};

int main(){
    Complejo a(3,2),b(1,7);
    Complejo c=a*b;
    cout<<c.re<<" + "<<c.im<<"i\n";
}
