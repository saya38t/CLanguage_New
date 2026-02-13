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
//メモ化再帰
int main(){
  ll n; cin >> n;
  map<ll,ll>memo;
  auto f=[&](auto f,ll x)->ll{
    if(memo[x]!=0) return memo[x];
    if(x==1) return 0;
    ll res=f(f,x/2)+f(f,(x+1)/2)+x;
    return memo[x]=res;//こうすればメモとreturn同時にできる!
  };
  cout << f(f,n) << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/