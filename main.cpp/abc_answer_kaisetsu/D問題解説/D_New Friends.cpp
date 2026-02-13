#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#include <atcoder/all>
using namespace atcoder;//必要なときだけ

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
  ll n,m; cin >> n >> m;
  //union-find
  //頂点を数えて計算したい
  dsu uf(n);
  rep(i,m){
    ll a,b; cin >> a >> b;
    a--; b--;
    uf.merge(a,b);
  }
  ll ans=0;
  rep(i,n){
    if(uf.leader(i)==i){
      ll x=uf.size(i);//iが属するグループの要素数
      ans+=x*(x-1)/2;
    }
  }
  cout << ans-m << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/