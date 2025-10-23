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
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  vector<ll>def(n-1);
  rep(i,n-1) def[i]=A[i+1]-A[i];
  ll ans = n;
  ll k=0;
  ll pre = def[0];
  rep(i,n-1){
    if(def[i]==pre) k++;
    else if(def[i]!=pre){
      pre = def[i];
      ans += k*(k+1)/2;
      k = 1;
    }
  }
  ans +=k*(k+1)/2;
  cout << ans << endl;
  return 0;
}