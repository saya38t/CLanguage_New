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
  ll n; cin >> n;
  vector<ll>A(n),B(n),C(n);
  rep(i,n) cin >> A[i];
  rep(i,n) cin >> B[i];
  rep(i,n) cin >> C[i];
  vector<vector<ll>>dp(3,vector<ll>(n,-1));
  dp[0][0]=A[0];
  rep(i,3)rep(j,n-1){
    if(dp[i][j]==-1) continue;
    //A
    if(i==0 && j<n-2) chmax(dp[i][j+1],dp[i][j]+A[j+1]);//そのまま
    if(i==0) chmax(dp[i+1][j+1],dp[i][j]+B[j+1]);
    //B
    if(i==1) {
      chmax(dp[i][j+1],dp[i][j]+B[j+1]);//そのまま
      chmax(dp[i+1][j+1],dp[i][j]+C[j+1]);
    }
    //c
    if(i==2) chmax(dp[i][j+1],dp[i][j]+C[j+1]);//そのまま
  }
  cout << dp[2][n-1] << endl;
  return 0;
}