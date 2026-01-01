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

  //DP(ナップサック)
  vector<vector<ll>>dp(N+1,vector<ll>(W+1,-1));//[番号][重さ]=価値
  dp[0][0]=0;
  rep(i,N){
    rep(j,W){
      if(j+w[i]<=W) chmax(dp[i+1][j+w[i]],dp[i][j]+v[i]); //選ぶ
      chmax(dp[i+1][j],dp[i][j]);//選ばない
    }
  }
  ll ans =0;
  rep(i,W+1) chmax(ans,dp[N][i]);
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/