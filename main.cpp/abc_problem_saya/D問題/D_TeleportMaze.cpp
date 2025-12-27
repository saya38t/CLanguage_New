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
const vector<ll>di={1,0,0,-1};//表移動(8)
const vector<ll>dj={0,1,-1,0};

//longlong仕様
int main(){
  ll h,w; cin >> h >> w;
  vector<vector<char>>grid(h,vector<char>(w));
  map<char,vector<P>>mp;
  map<char,bool>vis;
  rep(i,h)rep(j,w) {
    cin >> grid[i][j];
    if(grid[i][j]!='.'|| grid[i][j]!='#') {
      mp[grid[i][j]].emplace_back(pair(i,j));
      vis[grid[i][j]]=false;
    }
  }
  vector<vector<ll>>dist(h,vector<ll>(w,-1));
  queue<P>q;
  q.push(pair(0,0));
  dist[0][0]=0;
  while(!q.empty()){
    auto[i,j]=q.front(); q.pop();
    if(i==h-1 && j==w-1){
      cout << dist[i][j] << endl;
      return 0;
    }
    if(grid[i][j]=='#') continue;
    if(grid[i][j]=='.'){
      rep(k,4){
        ll I=i+di[k], J=j+dj[k];
        if(I<0 || I>h-1 || J<0 || J>w-1) continue;
        if(dist[I][J]!=-1) continue;
        if(grid[I][J]=='#') continue;
        dist[I][J]=dist[i][j]+1;
        q.push(pair(I,J));
      }
    }
    else{
      if(!vis[grid[i][j]]) for(auto[x,y]: mp[grid[i][j]]){
        if(dist[x][y]==-1){
          dist[x][y]=dist[i][j]+1;
          q.push(pair(x,y));
        }
      }
      vis[grid[i][j]]=true;
      rep(k,4){
        ll I=i+di[k], J=j+dj[k];
        if(I<0 || I>h-1 || J<0 || J>w-1) continue;
        if(dist[I][J]!=-1) continue;
        if(grid[I][J]=='#') continue;
        dist[I][J]=dist[i][j]+1;
        q.push(pair(I,J));
      }
    }
  }
  cout << dist[h-1][w-1] << endl;
  return 0;
}