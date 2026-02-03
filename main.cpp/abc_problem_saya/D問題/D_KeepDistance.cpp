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
  ll n,m; cin >> n >> m;
  ll sur=m-10*(n-1);
  
  map<ll,vector<ll>>mp;
  ll st=1;
  rep(i,n) {
    mp[i].emplace_back(st);
    rep(j,sur-1){
      mp[i].emplace_back(mp[i][j]+1);
    }
    st+=10;
  }
  vector<vector<ll>>vec;
  //dfs
  auto dfs = [&](auto dfs, vector<ll> a, ll x, ll I) -> void {
    if(a.size()==n){//再帰終了時の処理
      vec.emplace_back(a);
      return;//ループに戻る
    }
    for(ll i=I; i<sur; i++){
      vector<ll> na = a;//関数保持
      ll nx=x;
      na.push_back(mp[nx][i]);//足す
      dfs(dfs, na, nx+1,i);//再帰呼び出し
    }
    };
  dfs(dfs,vector<ll>(0), 0, 0);
  cout << vec.size() << endl;
  rep(i,vec.size()){
    rep(j,n) cout << vec[i][j] <<' ';
    cout << '\n';
  }
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/