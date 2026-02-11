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
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  vector<ll>ans(1e6,-1);
  ll i=0,x=1e6-1;
  while(x>0){
    if(i==n) break;
    if(A[i]<=x) {
      ans[x]=i+1; x--;
    }
    else i++;
  }
  rep(i,m){
    ll b; cin >> b;
    cout << ans[b] << endl;
  }
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/