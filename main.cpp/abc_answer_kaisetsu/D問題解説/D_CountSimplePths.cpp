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
const vector<ll>di={1,0,0,-1};//表移動(4)
const vector<ll>dj={0,1,-1,0};

//longlong仕様
int main(){
  ll h,w,k; cin >> h >> w>> k;
  vector<string>grid(h);
  rep(i,h) cin >> grid[i];
  ll cnt =0;
  vector<vector<bool>>vis(h,vector<bool>(w,false));
  //dfs
  auto f=[&](auto f, ll i, ll j, ll K)->void{
    //再帰終了時
    if(K==k){
      cnt++;
      return;
    }
    //訪問済
    vis[i][j]=true;
    //ループ
    rep(l,4){
      ll I=i+di[l], J=j+dj[l];
      if(I>=0 && I<=h-1 && J>=0 && J<=w-1 && !vis[I][J] && grid[I][J]=='.') f(f,I,J,K+1);
    }
    //訪問リセット
    vis[i][j]=false;
  };
  rep(i,h)rep(j,w){
    if(grid[i][j]=='.') {
      f(f,i,j,0);
    }
  }
  cout << cnt << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/
//O(4*100*3^10)