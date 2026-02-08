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
  ll n,t; cin >> n >> t;
  if(n==0) {
    cout << t << endl;
    return 0;
  }
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  A.emplace_back(t);
  queue<ll>Q;
  Q.push(0);
  ll sum=0;
  rep(i,A.size()){
    if(Q.empty()) break;
    ll o=Q.front();
    if(A[i]>=o){
      sum+=A[i]-o;
      Q.push(A[i]+100);
      while(o<=A[i]){
        Q.pop();
        o=Q.front();
      }
    }
  }
  cout << sum << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/