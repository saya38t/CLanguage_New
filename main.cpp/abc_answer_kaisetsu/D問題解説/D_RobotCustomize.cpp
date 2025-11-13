#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  ll W=0, sumB=0;
  vector<ll> HB,WH;//h-b
  rep(i,n){
    ll w,h,b; cin >> w >> h >> b;
    W += w;
    sumB+=b;
    if(h>b) {
      HB.emplace_back(h-b);
      WH.emplace_back(w);//嬉しさ
    }
  }
  W/=2;
  ll plus = 0,N=HB.size();

  //DP(ナップサック)
  //重さW以下で嬉しさの合計の最大値
  vector<vector<ll>>dp(N+1,vector<ll>(W+1,-1));//[個数][重さ]=嬉しさ
  dp[0][0]=0;

  rep(i,N)rep(j,W+1){
    if(j+WH[i]<=W){//選ぶ
      dp[i+1][j+WH[i]]=max(dp[i+1][j+WH[i]],dp[i][j]+HB[i]);
    }
    dp[i+1][j]=max(dp[i+1][j],dp[i][j]);//選ばない
  }

  rep(j,W+1) plus = max(plus,dp[N][j]);//N個全て処理した時の最大値
  cout << sumB+plus << endl;
  return 0;
}