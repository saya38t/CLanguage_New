#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, a=1;
    cin >> N >> K;
    for(int i = 0 ; i < N ; i++){
        if(a < K){
            a *= 2;
        } else {
            a += K;
        }
    } 
    cout << a << endl;
}

/*
表示されている整数＝aとしたとき、
a<Kならaを足す・・・操作A
a=<KならKを足す・・・操作B
をN回繰り返す
*/