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
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  map<ll,vector<P>>mp;//[元、（行先,重み）]
  rep(i,m){
    ll u,v,b; cin >> u >> v >> b;
    u--; v--;
    mp[u].emplace_back(pair(v,b));
    mp[v].emplace_back(pair(u,b));
  }
  vector<ll>ans(n,1e18);
  ans[0]=A[0];
  //bfs
  queue<ll>Q; Q.push(0);
  //vector<bool>vis(n,false);
  while(!Q.empty()){
    ll tp=Q.front(); Q.pop();
    //vis[tp]=true;
    for(auto[v,b]:mp[tp]){
      //if(vis[v]) continue;
      if(ans[v]<=ans[tp]+A[v]+b) continue;
      chmin(ans[v],ans[tp]+A[v]+b);
      Q.push(v);
    }
  }
  rep(i,n-1) cout << ans[i+1] <<' ';
  cout << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/