#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // eの使い方
    ll x = 1e9; // 1e9は10の9乗、つまり1000000000
    cout << "x: " << x << endl; // 出力: x: 1000000000
    // 1e9はint型の最大値を超えるので、long long型で扱う
    
    // 次のような計算も可能
    ll y = 1e9 + 7; // 1e9 + 7は10の9乗 + 7、つまり1000000007

    // pow関数を使った計算
    ll z = pow(10, 18); // 10の18乗
    cout << "z: " << z << endl; // 出力: z: 1000000000000000000
    // pow関数はdouble型を返すので、long long型にキャストする必要がある
    return 0;
}
