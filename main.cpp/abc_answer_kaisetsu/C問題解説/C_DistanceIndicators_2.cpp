//i<j意識
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> cnt;
    ll ans = 0;
    rep(i,n) {//1と2の順番にすることによりi<jを実現
        ans += cnt[i-a[i]];//1：一致する個数計算
        cnt[i+a[i]]++;//2：個数保存
    }
    cout << ans << endl;
    return 0;
}