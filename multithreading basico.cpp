#include <bits/stdc++.h>
#include <thread>
using namespace std;

void trabajo(int id){
    for(int i=0;i<5;i++){
        cout<<"Hilo "<<id<<" -> "<<i<<'\n';
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main(){
    thread t1(trabajo,1),t2(trabajo,2);
    t1.join(); t2.join();
}
