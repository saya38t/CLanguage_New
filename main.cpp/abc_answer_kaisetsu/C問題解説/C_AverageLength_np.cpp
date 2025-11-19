#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  vector<int>x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];
  double sum = 0;
  ll N = 1;
  rep(i,n-1) N*=(i+2);
  vector<int>vec(n);
  rep(i,n) vec[i]=i;

  //next_permutation
  do{//並び替えた配列への処理(順列全探索)
    rep(i,n-1) sum+=(double)sqrt(
      (x[vec[i]]-x[vec[i+1]])*(x[vec[i]]-x[vec[i+1]])+
      (y[vec[i]]-y[vec[i+1]])*(y[vec[i]]-y[vec[i+1]])
    );
  }while(next_permutation(vec.begin(),vec.end()));//並び替え処理

  cout << fixed << setprecision(15) << (double)sum/N << endl;
  //出力桁数指定(fixed << setprecision(有効数字何桁か))
  return 0;
}