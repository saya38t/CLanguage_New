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
  ll n,m; cin >> n >> m ;
  vector<vector<ll>>gra(n+1);
  rep(i,m){
    ll a,b; cin >> a >> b;
    a--; b--;
    if(b==0) gra[a].emplace_back(n);
    else gra[a].emplace_back(b);
  }
  //bfs
  vector<ll>dist(n+1,-1);
  dist[0]=0;
  queue<ll>Q;
  Q.push(0);
  while(!Q.empty()){
    ll t=Q.front(); Q.pop();
    for(ll p: gra[t]){
      if(dist[p]!=-1) continue;
      if(p==n) chmin(dist[n],dist[t]+1);
      dist[p]=dist[t]+1;
      Q.push(p);
    }
  }
  cout << dist[n] << endl;
  return 0;
}