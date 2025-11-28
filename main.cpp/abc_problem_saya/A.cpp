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
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int h,w; cin >> h >> w;
  vector<string>grid(h);
  rep(i,h) cin >>grid[i];

  vector<P>E;
  rep(i,h)rep(j,w){
    if(grid[i][j]=='E') E.emplace_back(pair(i,j));
  }

  rep(i,h)rep(j,w){
    if(grid[i][j]=='E'||grid[i][j]=='#') continue;
    int dis=E[0].first-i+E[0].second-j, x=0;
    rep(k,E.size()) if(dis>=E[k].first-i+E[k].second-j) {
      dis=E[k].first-i+E[k].second-j;
      x=k;
    }
    int I=E[x].first,J=E[x].second;
    char c;
    if(j-J>0 && j-1>=0 && grid[i][j-1]!='#') c='<';
    else if(j-J<0 && j+1<w && grid[i][j+1]!='#') c='>';
    else if(i-I>0 && i-1>=0 && grid[i-1][j]!='#') c='^';
    else if(i-I<0 && i+1<h && grid[i+1][j]!='#') c='v';
    grid[i][j]=c;
  }

  rep(i,h) cout << grid[i] << endl;
  return 0;
}