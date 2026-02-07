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
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  ll x=lower_bound(A.begin(),A.end(),A.back())-A.begin();//最大の値でない数
  ll N=A.size()-x;//最大の値の数
  ll cnt=0;
  vector<ll>ans;
  //恥を残す
  ll L=A.back();
  bool flg=true;
  if(x%2==0)rep(i,x/2){
    if(A[i]+A[x-i-1]!=L) {
      flg=false;
      break;
    }
  }
  if(x%2==0 && flg) ans.emplace_back(L);
  //そのまま足す
  L=A[0]+A[n-1];
  bool fl=true;
  if(n%2==0)rep(i,n/2){
    if(A[i]+A[n-i-1]!=L){
      fl=false;
      break;
    }
  }
  if(n%2==0 && fl) ans.emplace_back(L);
  for(ll a:ans) cout << a << ' ';
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/