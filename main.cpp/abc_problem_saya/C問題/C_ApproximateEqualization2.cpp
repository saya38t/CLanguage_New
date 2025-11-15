#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  vector<int>a(n);
  ll sum = 0;
  rep(i,n) {
    cin >>a[i];
    sum+=a[i];
  }
  sort(a.begin(),a.end());
  ll x = sum/n, y = sum%n;
  ll cnt = 0;
  rep(i,n-y){
    cnt += abs(a[i]-x);
  }
  x++;
  for(int i=n-y; i<n; i++){
    cnt += abs(a[i]-x);
  }
  cout << cnt/2 << endl;
  return 0;
}