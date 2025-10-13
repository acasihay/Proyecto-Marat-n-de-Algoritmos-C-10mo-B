#include <bits/stdc++.h>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

queue<int> q;
mutex m;
condition_variable cv;
bool done=false;

void productor(){
    for(int i=1;i<=5;i++){
        this_thread::sleep_for(chrono::milliseconds(200));
        unique_lock<mutex> lk(m);
        q.push(i);
        cout<<"Producido "<<i<<'\n';
        cv.notify_one();
    }
    done=true;
    cv.notify_all();
}

void consumidor(){
    while(true){
        unique_lock<mutex> lk(m);
        cv.wait(lk,[]{return !q.empty()||done;});
        if(q.empty() && done) break;
        int x=q.front(); q.pop();
        lk.unlock();
        cout<<"Consumido "<<x<<'\n';
    }
}

int main(){
    thread p(productor), c(consumidor);
    p.join(); c.join();
}
