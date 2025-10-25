#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int h,w; cin >> h >> w;
  vector<string>S(h);
  vector<int>dot;
  rep(i,h) cin >> S[i];
  rep(i,h){
    rep(j,w){
      if(S[i][j]=='.'){
        int cnt = 0;
        rep(k,8){
          int I = i+di[k],J=j+dj[k];
          if(I<0 || I>h-1 || J<0 || J>w-1) continue;
          else if(S[I][J]=='#') cnt++;
        }
        dot.emplace_back(cnt);
      }
    }
  }
  int k=0;
  rep(i,h){
    rep(j,w){
    if(S[i][j]=='.'){
      cout << dot[k];
      k++;
    }
    else cout << S[i][j];
    }
    cout << '\n';
  }
  return 0;
}