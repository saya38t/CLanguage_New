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
  int n;
  cin >>n;
  vector<vector<int>>a(2,vector<int>(n));
  rep(i,n) cin >> a[0][i];
  rep(i,n) cin >> a[1][i];
  int ans = 0;
  rep(k,n){
    int sum=0;
    for(int j=0; j<=k; j++) sum += a[0][j];
    for(int j=k; j<n; j++) sum += a[1][j];
    ans=max(ans,sum);
  }
  cout << ans << endl;
  return 0;
}