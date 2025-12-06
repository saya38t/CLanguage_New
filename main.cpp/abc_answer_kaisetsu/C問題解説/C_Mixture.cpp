#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

//BFS(先頭から到達できる状態を追加&bool管理でtrue->最終地点確認)
void solve(){
  int n; string S;
  cin >> n >> S;
  ll N=(1<<n);
  vector<bool>vis(N,false);
  queue<ll>q;
  vis[0]=true;
  q.push(0);
  while(!q.empty()){
    ll s=q.front(); q.pop();
    rep(i,n){
      ll ns = s|(1<<i);//sが0のbit桁に1足した値
      if(ns==s) continue;
      if(S[ns-1]=='1') continue;
      if(vis[ns]) continue;
      vis[ns]=true;
      q.push(ns);
    }
  }
  if(vis[N-1]) cout << "Yes\n";
  else cout << "No\n";
}

int main(){
  int t; cin >> t;
  rep(i,t) solve();
  return 0;
}