#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,0,0,-1};//表移動(4)
const vector<int>dj={0,1,-1,0};

int main(){
  int h,w; cin >> h >>w;
  vector<vector<char>>S(h,vector<char>(w));
  rep(i,h){
    string s;cin >> s;
    rep(j,w) S[i][j]=s[j];
  }
//多始点BFS
  vector<vector<bool>>vis(h,vector<bool>(w));
  vector<vector<int>>dist(h,vector<int>(w,-1));
  queue<P> que;
  rep(i,h)rep(j,w) {
    if(S[i][j]=='E'){
      dist[i][j] = 0;
      vis[i][j] = true;
      que.push(pair(i,j));//頂点追加
    }
  }
  while(!que.empty()){
    pair v = que.front();
    que.pop();
    //たどれる頂点みる
    vector<bool>ng(4);
    rep(k,4){
      if(ng[k]) continue;
      int I=v.first+di[k], J=v.second+dj[k];
      if(I<0 || I>h-1 || J<0 || J>w-1) continue;
      if(S[I][J]=='#'){
        ng[k]=true;
        continue;
      }
      if(dist[I][J]==-1){
        dist[I][J]=dist[v.first][v.second]+1;
        que.push(pair(I,J));
        vis[I][J]=true;
      }
    }
  }
  rep(i,h)rep(j,w){
    if(dist[i][j]==-1) continue;
    int x=dist[i][j];
    rep(k,4){
      int I=i+di[k], J=j+dj[k];
      if(I<0 || I>h-1 || J<0 || J>w-1) continue;
      if(S[I][J]=='#') continue;
      if(dist[I][J]==(x-1)){
        if(k==0) S[i][j]='v';
        else if(k==1) S[i][j]='>';
        else if(k==2) S[i][j]='<';
        else if(k==3) S[i][j]='^';
        break;
      }
    }
  }
  rep(i,h){
    rep(j,w) cout << S[i][j];
    cout << '\n';
  }
  return 0;
}