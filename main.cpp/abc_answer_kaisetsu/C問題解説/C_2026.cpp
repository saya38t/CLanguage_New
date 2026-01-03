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
  ll n; cin >> n;
  vector<ll>cnt(n+1);
  for(ll i=1;i*i<n; i++)for(ll j=i+1;j*j<n+1;j++){
    if(i*i+j*j>n) continue;
    cnt[i*i+j*j]++;
  }
  ll c=0;
  rep(i,n+1){
    if(cnt[i]==1) c++;
  }
  cout << c << endl;
  rep(i,n+1) if(cnt[i]==1) cout << i << ' ';
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/