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
  vector<vector<P>>val(n);//[元]:(先、重み)
  rep(i,m){
    ll u,v,w; cin >> u >> v >> w;
    u--; v--;
    val[u].emplace_back(pair(v,w));
    val[v].emplace_back(pair(u,-w));
  }
  vector<bool>vis(n,false);
  vector<ll>ans(n,0);
  //bfs
  queue<ll>Q;//辺がある頂点
  auto bfs=[&] (ll x)->void{
    Q.push(x);
    while(!Q.empty()){
      ll tp=Q.front(); Q.pop();
      for(auto[v,w]:val[tp]){
        if(vis[v]) continue;
        ans[v]=ans[tp]+w;
        vis[v]=true;
        Q.push(v);
      }
    }
  };
  rep(i,n) {
    if(vis[i]) continue;
    else if(val[i].size()==0) vis[i]=true; 
    else bfs(i);
  }
  rep(i,n) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/