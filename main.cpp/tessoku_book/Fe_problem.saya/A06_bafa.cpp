/*バッファリング、配列にあらかじめ０を用意して工夫*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n, q;
    cin >> n >> q;
    
    vector<int>a(n+1);
    int sum=0;
    rep(i,n){
        int A;
        cin >> A;
        sum+=A;
        a.at(i+1)=sum;
    }
    vector<int> L(q);
    vector<int> R(q);
    rep(i,q){
        int l,r;
        cin >> l >> r;
        L.at(i)=l;
        R.at(i)=r;
    }
    rep(i,q) {
        int l, r;
        l=L.at(i); r=R.at(i);
        cout << a.at(r)-a.at(l-1) << endl;
    }
}
/*
0～N-1
累積和の配列作る
sum=0つくっとく
vectorもつくっとく
要素０の値=０
受け取る→sumに足す→vector配列
vectorでl-1とrの差
ｑ回ループ答え
※入力はまとめてやってバッファリングした方が
コンピュータの負担少なくて良
*/