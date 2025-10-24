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
  int n; cin >> n;
  vector<int>x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];
  double sum = 0;
  ll N = 1;
  rep(i,n-1) N*=(i+2);
  ll k = 2*N/n;
  rep(i,n)for(int j=i+1; j<n; j++){
    sum += (double)k*sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
  }
  cout << fixed << setprecision(15) << (double)sum/N << endl;
  //出力桁数指定(fixed << setprecision(有効数字何桁か))
  return 0;
}