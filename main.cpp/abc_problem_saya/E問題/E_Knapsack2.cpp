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
  ll N,W; cin >>N >> W;
  vector<ll> w(N),v(N);
  rep(i,N) cin >> w[i] >> v[i];
  ll S=0;
  rep(i,N) S+=v[i];
  
  //DP(ナップサック)
  vector<vector<ll>>dp(N+1,vector<ll>(S+1,-1));//[番号][価値]=重さ
  vector<vector<bool>>vis(N+1,vector<bool>(S+1,false));
  dp[0][0]=0;
  vis[0][0]=true;
  rep(i,N){
    rep(j,S){
      if(dp[i][j]==-1) continue;
      if(dp[i][j]+w[i]<=W) {
        if(vis[i+1][j+v[i]]) chmin(dp[i+1][j+v[i]],dp[i][j]+w[i]); //選ぶ
        else chmax(dp[i+1][j+v[i]],dp[i][j]+w[i]); //選ぶ
        vis[i+1][j+v[i]]=true;
      }
      if(vis[i+1][j]) chmin(dp[i+1][j],dp[i][j]);//選ばない
      else chmax(dp[i+1][j],dp[i][j]);//選ばない
    }
  }
  ll ans = 0;
  rep(i,N+1)rep(j,S+1) if(dp[i][j]>0) chmax(ans,j);
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/