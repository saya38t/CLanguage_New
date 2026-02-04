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
  ll n,k,x; cin >> n >> k>> x;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  vector<ll>a(k);
  rep(i,k) a[i]=A[i];
  sort(a.rbegin(),a.rend());
  rep(i,k-1) a[i+1]+=a[i];
  ll cup=lower_bound(a.begin(),a.end(),x)-a.begin();
  if(cup==k){
    cout << -1 << endl;
    return 0;
  }
  cout << n-k+cup+1 << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/