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
  vector<ll>A(n); rep(i,n) cin >>A[i];
  map<ll,vector<ll>>sev,trois;
  vector<ll>cinq(n);
  rep(i,n){
    cinq[i]=A[i]*7*3;
    sev[A[i]*3*5].emplace_back(i);
    trois[A[i]*5*7].emplace_back(i);
  }
  ll ans =0;
  rep(i,n){
    ll A=cinq[i];
    ll I=i;
    if(sev[A].size()==0 || trois[A].size()==0) continue;
    ll s=upper_bound(sev[A].begin(), sev[A].end(),I)-sev[A].begin();
    ll t=upper_bound(trois[A].begin(), trois[A].end(),I)-trois[A].begin();
    ans+=s*t+(trois[A].size()-t)*(sev[A].size()-s);
    //cout << ans <<',' << s << ',' << t << endl;
  }
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/