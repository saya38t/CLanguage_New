#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n; cin >> n;
    unordered_set<ll>st;
    rep(i,n){
        ll t; cin >> t;
        st.emplace(t);
    }
    vector<ll>T;
    for(ll x:st) T.emplace_back(x);
    ll ans = T[0];
    //最小公倍数,ＧＣＤ活用
    rep(i,T.size()-1){
        ans = ans/gcd(ans,T[i+1]) *T[i+1];
        //gcd(a,b)==aとbの最大公約数
    }
    cout << ans << endl;
    return 0;
}