#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int m = 1000000001;
  int n;
  cin >> n;
  vector<bool>H(m);
  int x=0;
  rep(i,n){
    int h;
    cin >> h;
    if(x<=h) {
      x=h;
      continue;
    }
    if(x-1>h || H[x]){
      cout << "No" << endl;
      return 0;
    }
    x--;
    //cout << x << endl;
    H[x]=true;
  }
  cout << "Yes"<< endl;
  return 0;
}
/*言い換えてシンプルに解く*/