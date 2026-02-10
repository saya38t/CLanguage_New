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
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//longlong仕様
int main(){
  ll t; cin >> t;
  rep(i,t){
    ll n,h; cin >> n >> h;
    ll pt=0,pl=h,pu=h;
    ll yn=true;
    rep(j,n){
      ll t,l,u; cin >> t >> l >> u;
      if(!yn) continue;
      ll plL,puU;
      plL=max((ll)1,pl-(t-pt)),puU=pu+(t-pt);
      pl=max(plL,l), pu=min(puU,u);
      if(pl>pu) yn=false;
      pt=t;
    }
    if(yn) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/