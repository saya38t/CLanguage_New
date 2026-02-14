#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
/*
#include <atcoder/all>
using namespace atcoder;//必要なときだけ
*/
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//longlong仕様
int main(){
  ll t; cin >> t;
  auto solve=[&]()->void{
    ll n; cin >> n;
    vector<ll>R(n);
    rep(i,n) cin >> R[i];
    vector<ll>t=R;
    rep(i,n-1) if(t[i+1]>t[i]) chmin(t[i+1],t[i]+1);
    for(ll i=n-1; i>0; i--) if(t[i-1]>t[i]) chmin(t[i-1],t[i]+1);
    ll ans=0;
    rep(i,n) ans+=R[i]-t[i];
    cout << ans << endl;
  };
  rep(i,t) solve();
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/