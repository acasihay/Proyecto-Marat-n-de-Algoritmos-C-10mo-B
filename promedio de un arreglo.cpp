#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<double> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    double s=accumulate(a.begin(),a.end(),0.0);
    cout<<fixed<<setprecision(2)<<s/n<<'\n';
}
