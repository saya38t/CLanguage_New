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
  int n; ll x,y;
  cin >> n >> x >> y;
  vector<ll>a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  ll ans = 0, yx = y-x;
  rep(i,n){
    ll A = (a[i]-a[0])*y;
    if(A%yx!=0 || a[i]-A/yx < 0){
      cout << -1 << endl;
      return 0;
    }
    ans += a[i]-A/yx;
  }
  cout << ans << endl;
  return 0;
}