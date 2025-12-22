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
  map<ll,vector<P>>mp;//pair(頂点,w)
  rep(i,m){
    ll u,v,w; cin >> u>> v >> w;
    u--; v--;
    mp[u].emplace_back(pair(v,w));
    mp[v].emplace_back(pair(u,w));
  }
  vector<bool>vis(n,false);
  ll ans;
  ll cnt=0;
  auto dfs = [&](auto dfs, ll w, ll peak) -> void {
    vis[peak]=true;//訪問済み
    if(peak==n-1){//再帰終了時の処理
      cnt++;
      if(cnt==1) ans=w;
      else chmin(ans,w);
      vis[peak]=false;//訪問外す
      return;//ループに戻る
    }
    for(auto[p,W]: mp[peak]){
      if(vis[p]) continue;
      dfs(dfs,w^W,p);//再帰呼び出し
    }
    vis[peak]=false;//訪問外す
  };
  dfs(dfs,0,0);
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/