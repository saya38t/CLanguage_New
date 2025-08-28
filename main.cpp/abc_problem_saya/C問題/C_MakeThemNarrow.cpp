#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 2e9;
    rep(i,k+1){
        ans = min(ans, (a[n-i-1] - a[k-i]));
    }
    cout << ans << endl;
    return 0;
}
/*
eで10の累乗表現可能
ex.) 10の9乗 == 1e9 //e9だけだとエラーになる！！必ずつける

ミス注意
・数字を変えながら計算する問題でちょいややこい
→数値の指定範囲正確に！！＝＝端と端を紙とペンでシミュレーションして確認！！！
*/