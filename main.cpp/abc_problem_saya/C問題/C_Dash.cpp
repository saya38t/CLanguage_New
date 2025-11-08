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
  int n,m,h,k; cin >> n >> m >> h >>k;
  string s; cin >> s;
  set<P>item;
  rep(i,m) {
    int x,y;
    cin >> x >> y;
    item.emplace(pair(x,y));
  }
  int x=0,y=0;
  rep(i,s.size()){
    if(s[i]=='R') x++;
    if(s[i]=='L') x--;
    if(s[i]=='D') y--;
    if(s[i]=='U') y++;
    h--;
    if(h<0){
      cout << "No" << endl;
      return 0;
    }
    //必要な座標だけ管理したいならset<P>がよい！
    if(item.find({x,y})!=item.end() && h<k) {//setで座標あるか確認
      h=k;
      item.erase({x,y});//set消すとき
    }
  }
  cout << "Yes" << endl;
  return 0;
}