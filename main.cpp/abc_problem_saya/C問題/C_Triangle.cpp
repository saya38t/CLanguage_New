#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<ll,ll>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n;
  cin >> n;
  vector<P>xy(n);
  rep(i,n){
    ll x,y;
    cin >> x >> y;
    xy[i]=pair(x,y);
  }
  int cnt = 0;
  for(int i=0; i<n; i++)for(int j=i+1; j<n; j++)for(int k=j+1;k<n; k++){
    if(xy[i]==xy[j]|| xy[j]==xy[k] || xy[k]==xy[i]) continue;
    ll a=xy[i].first,b=xy[i].second,
      c=xy[j].first,d=xy[j].second,
      e=xy[k].first,f=xy[k].second;
    if((d-b)*(e-a)==(f-b)*(c-a)) continue;//直線の方程式(ベクトル)
    //(a,b),(c,d),(e,f)の3点が同一直線上かを求めた
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
/*言い換えてシンプルに解く*/
//三角形の面積
/*
3点 (a,b),(c,d),(e,f) を結んで出来る三角形の面積
== abs((c-a)*(f-b)-(e-a)*(d-b))/2
(但し、 この値が 0 になる場合は 3 点が一直線上にある。)
*/
//三角形をなすか？
//(c-a)*(f-b)-(e-a)*(d-b)==0 なら No