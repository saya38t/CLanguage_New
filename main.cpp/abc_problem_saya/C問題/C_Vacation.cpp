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
  vector<ll>a(n),b(n),c(n);
  rep(i,n) cin >> a[i] >> b[i] >> c[i];
  vector<vector<ll>>dp(n+1,vector<ll>(3,0));//0:a, 1:b, 2:c
  rep(i,n){
    dp[i+1][0]=max(dp[i][1]+a[i],dp[i][2]+a[i]);//a
    dp[i+1][1]=max(dp[i][0]+b[i],dp[i][2]+b[i]);//b
    dp[i+1][2]=max(dp[i][1]+c[i],dp[i][0]+c[i]);//c
  }
  cout << max({dp[n][0],dp[n][1],dp[n][2]}) << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/