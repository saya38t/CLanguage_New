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
  ll n,S; cin >> n >> S;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  vector<ll>imosA=A;
  rep(i,n) imosA.emplace_back(A[i]);
  //cout << imosA.size() << endl;
  rep(i,2*n-1) imosA[i+1]+=imosA[i];

  S%=imosA[n-1];
  rep(i,n){
    ll x=lower_bound(imosA.begin(),imosA.end(),imosA[i]+S)-imosA.begin();
    if(x==imosA.size()) continue;
    if(imosA[x]==imosA[i]+S){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/