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
  ll h,w,k; cin >> h >> w >> k;
  vector<string>S(h);
  rep(i,h) cin >> S[i];
  vector<vector<P>>imos(h,vector<P>(w,pair(1,0)));//(結局oの数, 既にoの数)
  rep(i,h)rep(j,w) {
    if(S[i][j]=='o') imos[i][j]=pair(1,1);
    else if(S[i][j]=='x') imos[i][j]=pair(-1,0);
  }
  auto solve=[&](vector<vector<P>>s,ll H, ll W)->ll{
    rep(i,H){
      rep(j,W-1){
        if(s[i][j+1].first==-1) continue;
        if(s[i][j].first==-1) {
          s[i][j]=pair(0,0);
          continue;
        }
        else {
          s[i][j+1].first+=s[i][j].first;
          s[i][j+1].second+=s[i][j].second;
        }
      }
    }
    ll res=1e18;
    rep(i,H)rep(j,W){
      if(s[i][j].first>=k) {
        if(j-k>-1) chmin(res,k-(s[i][j].second-s[i][j-k].second));
        else chmin(res,k-s[i][j].second);
      }
    }
    return res;
  };
  vector<vector<P>>iimos(w,vector<P>(h));
  rep(i,h)rep(j,w) iimos[j][i]=imos[i][j];
  ll ans=1e18;
  chmin(ans,solve(imos,h,w));
  chmin(ans,solve(iimos,w,h));
  if(ans==1e18) ans=-1;
  cout << ans << endl;
  return 0;
}