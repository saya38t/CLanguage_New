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
  ll n,k; cin >> n >> k;
  vector<ll>P(n);
  rep(i,n) cin >> P[i];
  if(k==1) {
    cout << 0 << endl;
    return 0;
  }
  vector<ll>S(n);//[値]=添え字
  rep(i,n) S[P[i]-1]=i+1;
  ll ans=1e16;
  set<ll>st;
  rep(i,n){
    st.emplace(S[i]);
    if(st.size()>k) st.erase(S[i-k]);
    if(st.size()==k) chmin(ans,*st.rbegin()-*st.begin());
  }
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/