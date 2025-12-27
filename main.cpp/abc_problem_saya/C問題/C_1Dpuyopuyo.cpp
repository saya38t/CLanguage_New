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
  vector<P>stk;
  stk.push_back(pair(0,0));
  rep(i,n) {
    ll a; cin >> a;
    pair t=stk[stk.size()-1];
    //cout <<a<<','<< t.first <<','<<t.second<< endl;
    if((ll)a==(ll)t.first){
      stk.back().second=t.second+1;
      if(stk.back().second==4) stk.pop_back();
    }
    else {stk.push_back(pair(a,1));}
  }
  ll ans = 0;
  rep(i,stk.size()) {
    ans+=stk[i].second;
  }
  cout  << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/