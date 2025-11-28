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
  int a,b; cin >> a >> b;
  int w; cin >> w;
  w*=1000;
  int MIN=1000001, MAX=0;
  rep(x,w+1){
    if(a*x<=w && w<=b*x){
      chmin(MIN,x); chmax(MAX,x);
    }
  }
  if(MIN==1000001) cout << "UNSATISFIABLE" << endl;//Wにならない場合
  else cout << MIN << ' ' << MAX << endl;
  return 0;
}