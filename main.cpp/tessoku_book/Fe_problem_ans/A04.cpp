#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int x = 9; x>=0; x--){
        int wari =(1<<x);
        //  << や >> で二進数の桁移動できる
        // x<<1なら左へ１ビット桁移動＝＝2乗を1回分（左シフト）
        // 二進数の表記をイメージ！
        // x>>1なら右へ１ビット桁移動
        cout << (n/wari)%2;
    }
    cout << endl;
    return 0;
}