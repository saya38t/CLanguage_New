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
  ll n,m,l,s,t; cin >> n >> m >> l >> s >> t;
  vector<vector<P>>mp(n);//[元：(行先、コスト),...]
  rep(i,m){
    ll u,v,c;
    cin >> u >> v >> c;
    u--; v--;
    mp[u].emplace_back(pair(v,c));
  }
  vector<bool>ans(n,false);
  //dfs
  //vector<bool>vis(n+1);
  auto dfs = [&](auto dfs, ll r, ll u, ll c) -> void {
        if(r==0){//再帰終了時の処理
          if(s<=c && c<=t) ans[u]=true;
          return;//ループに戻る
        }
        if(mp[u].size()==0) return;
        if(c>t) return;
        for(auto[v,y]: mp[u]){
          dfs(dfs, r-1, v, c+y);//再帰呼び出し
        }
      };
    dfs(dfs,l,0,0);
  rep(i,n) if(ans[i]) cout << i+1 << ' ';
  cout << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/