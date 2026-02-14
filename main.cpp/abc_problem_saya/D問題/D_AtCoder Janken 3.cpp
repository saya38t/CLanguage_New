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
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//longlong仕様
int main(){
  ll n; cin >> n;
  string S; cin >> S;
  map<char,char>win;
  win['R']='P',win['P']='S',win['S']='R';
  vector<vector<ll>>dp(n,vector<ll>(2,-1));//[j回目][勝か引き分け]
  //[0]=引き分け、[1]=勝ち
  dp[0][0]=0,dp[0][1]=1;
  rep(i,n-1){
    if(S[i]!=S[i+1]&&dp[i][0]!=-1) dp[i+1][0]=max(dp[i+1][0],dp[i][0]);
    if(S[i]!=win[S[i+1]]&&dp[i][0]!=-1) dp[i+1][1]=max(dp[i+1][1],dp[i][0]+1);
    if(win[S[i]]!=S[i+1]&&dp[i][1]!=-1) dp[i+1][0]=max(dp[i+1][0],dp[i][1]);
    if(win[S[i]]!=win[S[i+1]]&&dp[i][1]!=-1) dp[i+1][1]=max(dp[i+1][1],dp[i][1]+1);
  }
  ll ans=max({dp[n-1][0],dp[n-1][1]});
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/