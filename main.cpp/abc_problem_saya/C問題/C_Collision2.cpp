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
  int n;
  cin >> n;
  vector<P>P(n);
  set<int>Y;
  rep(i,n){
    int x,y;
    cin >> x >> y;
    P[i]=pair(x,y);
    Y.emplace(y);
  }
  vector<int>y;
  for(int a:Y) y.emplace_back(a);

  map<int,set<char>>RL;

  string S; cin >> S;
  map<int,set<int>>R;
  map<int,set<int>>L;
  rep(i,n){
    int yy=P[i].second, xx=P[i].first;
    if(S[i]=='R') {
      R[yy].emplace(xx);
      RL[yy].emplace('R');
    }
    else if(S[i]=='L'){
      L[yy].emplace(xx);
      RL[yy].emplace('L');
    }
  }
  rep(i,y.size()){
    if(RL[y[i]].size()==2 && *R[y[i]].begin()< *prev(L[y[i]].end())){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
//c++だとマップで存在しないキーにアクセスしても大丈夫！！