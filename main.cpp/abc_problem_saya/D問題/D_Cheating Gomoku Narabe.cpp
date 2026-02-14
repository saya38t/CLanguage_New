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
  vector<vector<P>>iimos=imos;
  rep(i,h){
    rep(j,w-1){
      if(imos[i][j+1].first==-1) continue;
      if(imos[i][j].first==-1) {
        imos[i][j]=pair(0,0);
        continue;
      }
      else {
        imos[i][j+1].first+=imos[i][j].first;
        imos[i][j+1].second+=imos[i][j].second;
      }
    }
  }
  rep(i,w){
    rep(j,h-1){
      if(iimos[j+1][i].first==-1) continue;
      if(iimos[j][i].first==-1) {
        iimos[j][i]=pair(0,0);
        continue;
      }
      else {
        iimos[j+1][i].first+=iimos[j][i].first;
        iimos[j+1][i].second+=iimos[j][i].second;
      }
    }
  }
  /*rep(i,h){
    rep(j,w)  cout << iimos[i][j].first <<','<<iimos[i][j].second <<' ';
    cout << endl;
  }*/
  ll ans=1e18;
  rep(i,h)rep(j,w){
    if(imos[i][j].first>=k) {
      if(j-k>-1)chmin(ans,k-(imos[i][j].second-imos[i][j-k].second));
      else chmin(ans,k-imos[i][j].second);
    }
    //cout << ans << endl;
  }
  rep(i,w)rep(j,h){
    if(iimos[j][i].first>=k) {
      if(j-k>-1)chmin(ans,k-(iimos[j][i].second-iimos[j-k][i].second));
      else chmin(ans,k-iimos[j][i].second);
    }
    //cout << ans << endl;
  }
  if(ans==1e18) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/s