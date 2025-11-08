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
  ll n, x, y;
  cin >> n >> x >> y;
  if(n==1){
    cout << 0 << endl;
    return 0;
  }
  ll red = x+1, blue = x*y;//n-1
  for(int i=1; i<=n-2; i++){//n-2~1
    blue=(red*x+blue)*y;
    red+=blue/y;
  }
  cout << blue << endl;
  return 0;
}
//漸化式の思考回路、だいじ
//解説、図の書き方。前の値を利用したいとき配列つかうとやりやすい