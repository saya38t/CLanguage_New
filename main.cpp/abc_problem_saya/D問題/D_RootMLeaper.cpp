#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//ACL使いたいときは↓↓「//」消してコードテストで確認、提出

//#include <atcoder/all>
//using namespace atcoder;

using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,-1,-1};//掛け算
const vector<ll>dj={-1,-1,1};

//longlong仕様
int main(){
  ll n,m; cin >> n >> m;
  set<P>pr;//(x,y)
  //mのユークリッド
  for(ll i=1; i<=sqrtl(m); i++){
    ll x=i,r;
    if(m-x*x==0) {
      r=0;
      pr.emplace(pair(x,r));
      pr.emplace(pair(r,x));
    }
    else{
      r=sqrtl(m-x*x);
      if(r*r+x*x==m) {
        pr.emplace(pair(x,r));
        pr.emplace(pair(r,x));
      }
    }
  }
  //足し算ペアつくる
  for(auto[x,y]:pr){
    rep(i,3) {
      ll X,Y;
      if(x==0) X=0;
      if(y==0) Y=0;
      if(x!=0) X=x*di[i];
      if(y!=0) Y=y*dj[i];
      pr.emplace(pair(X,Y));
    }
  }

  vector<vector<ll>>grid(n,vector<ll>(n,-1));
  grid[0][0]=0;
  //bfs
  queue<P>que;
  que.push(pair(0,0));
  while(!que.empty()){
    auto [x,y]=que.front(); que.pop();
    for(auto [a,b]:pr){
      ll I=x+a,J=y+b;
      if(I<0 || J<0 || I>=n || J>=n) continue;
      if(grid[I][J]!=-1) continue;
      grid[I][J]=grid[x][y]+1;
      que.push(pair(I,J));
    }
  }
  rep(i,n){
    rep(j,n){
      cout << grid[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}