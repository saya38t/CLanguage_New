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
  ll n,m,k; cin >> n >> m >> k;
  vector<ll>A(n),B(n);
  rep(i,n) cin >> A[i] >> B[i];
  ll ans=0;
  //dp
  vector<vector<ll>>dp(n,vector<ll>(m+1,-1));//[番号][滞在費]=利益
  rep(i,n) {
    if(B[i]>m) continue;
    dp[i][B[i]]=A[i];
  }
  rep(i,n)rep(j,m+1){
    if(dp[i][j]==-1) continue;
      for(ll I=i+1; I<min(i+k+1,n); I++){
        ll J=j+B[I];
        if(J>m) continue;
        chmax(dp[I][J],dp[i][j]+A[I]);
      }
  }
  rep(i,n)rep(j,m+1) chmax(ans,dp[i][j]);
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/