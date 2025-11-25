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
  vector<vector<int>>grid(3,vector<int>(3));
  rep(i,3)rep(j,3) cin >> grid[i][j];
  rep(j,2){
    int bb = grid[0][j]-grid[0][j+1];
    rep(i,2){
      if(bb!=grid[i+1][j]-grid[i+1][j+1]){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  rep(i,2){
    int aa = grid[i][0]-grid[i+1][0];
    rep(j,2){
      if(aa!=grid[i][j+1]-grid[i+1][j+1]){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}