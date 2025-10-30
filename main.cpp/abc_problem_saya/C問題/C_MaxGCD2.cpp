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
  int a,b; cin >> a >> b;
  int ab = b-a;
  rep(k,b-a+2){
    int y = ab-k;
    int x = a%y;
    if(x==0 || 2*y-x+1<=ab+1){//
      cout << ab-k << endl;
      return 0;
    }
  }
  return 0;
}
//これあってたら天才！
//整数問題、あとで記録
//連続する整数中にはその個数以下の全ての整数について約数にもつ整数が存在すること、剰余の周期性