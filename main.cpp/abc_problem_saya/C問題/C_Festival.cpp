#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
/*
#include <atcoder/all>
using namespace atcoder;//必要なときだけ
*/
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
  ll n,m; cin >> n >> m;
  vector<ll>A(m);
  rep(i,m) cin >> A[i];
  sort(A.begin(),A.end());
  rep(i,n) {
    ll x=lower_bound(A.begin(),A.end(),i+1)-A.begin();
    if(x==m) cout << 0 << endl;
    else cout << A[x]-i-1 << endl;
  }
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/