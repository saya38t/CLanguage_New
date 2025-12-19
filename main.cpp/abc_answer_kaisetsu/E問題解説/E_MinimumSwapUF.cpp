#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//longlong仕様
int main(){
  ll n; cin >> n;
  dsu uf(n);
  ll ans = 0;
  rep(i,n){
    ll p; cin >> p;
    p--;
    if(p==i) continue;
    if (uf.same(p,i)) {
      ll n=uf.size(p);
      ans+=n*(n-1)/2;
    }
    else uf.merge(p,i);
  }
  cout << ans << endl;
  return 0;
}