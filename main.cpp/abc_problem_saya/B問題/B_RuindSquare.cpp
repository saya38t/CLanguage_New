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
  int x,y,xx,yy;
  cin >> x>>y>>xx>>yy;
  int dx=xx-x, dy=yy-y;//ベクトル2->1
  cout << -dy+xx << ' ' << dx+yy << ' ';//w=π/2
  dx=x-xx,dy=y-yy;//ベクトル1->2
  cout << dy+x << ' ' << -dx+y;//w=3π/2
  cout << endl;
  return 0;
}
/*
始点(a,b)で終点(s,t)のベクトルを角度w回転させる(回転行列)
(cosw -sinw,sinw cosw)(s-a,t-b)+(a,b)
[ cosθ  -sinθ ]     [ x ]     = [ cosθ * x + (-sinθ) * y ]
[ sinθ   cosθ ]  ×  [ y ]       [ sinθ * x + cosθ * y ]
*/