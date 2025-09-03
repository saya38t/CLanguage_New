#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>A(200000);//最大サイズの配列用意
    int l=0;
    rep(i,n){
        cin >> A[l];//指数で計算
        l++;//末尾の要素数(ボールの数)==l
        while(l>1){
            if(A[l-1]==A[l-2]) {
                A[l-2]++;//二倍の大きさ==二乗が一つ増える
                l--;//末尾の番号は一つ前にずれる
            }
            else break;
        }
    }
    cout << l << endl;//サイズ出力
    return 0;
}
/**/