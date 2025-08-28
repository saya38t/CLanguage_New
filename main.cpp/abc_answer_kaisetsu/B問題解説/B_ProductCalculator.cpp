#include <bits/stdc++.h>
using namespace std;
using ll = long long;//longlongをllで表せる
int main(){
    int n, k;
    cin >> n >> k;
    ll m = 1;
    for(int i=0; i<k; i++) m *= 10;

    ll x = 1;
    for(int i=0; i<n; i++) {
        ll a;
        cin >> a;
        if((m-1)/a < x) x = 1;
        else x *= a;
    }

    cout << x << endl;
    return 0;
}

/*
＞＞解説
ぽ:桁数の拡張
　(intは2³¹-1≒10⁹*2
longlongは2⁶³-1≒9*10¹⁸までしか表示不可)
しかし計算するとlonglongでもオーバーフロー
    →解１）128bit整数を使う(コンパイラ拡張)
★★★解２) M<=x*Aを(M/x)<=Aと読み替える手法
           M÷xが少数になるとき誤差生ずるので
           (M-1)/x <Aとして解決(=が無い式に)
           ∵3.12<4だし3<4だから切り捨ても可
    ☆解３) M%A!=0で分岐も可能
*/