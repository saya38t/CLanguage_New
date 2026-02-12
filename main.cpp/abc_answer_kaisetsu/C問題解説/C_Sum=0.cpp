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
  vector<ll>L(n),R(n);
  ll sumL=0,sumR=0;
  rep(i,n){
    cin >> L[i] >>R[i];
    sumL+=L[i]; sumR+=R[i];
  }
  if(sumR<0 || sumL>0){
    cout << "No" << endl;
    return 0;
  }
  vector<ll>imos(n);
  rep(i,n) imos[i]=R[i]-L[i];
  rep(i,n-1) imos[i+1]+=imos[i];
  ll x=lower_bound(imos.begin(),imos.end(),0-sumL)-imos.begin();//
  if(x>0) sumL+=imos[x-1];
  cout << "Yes" << endl;
  rep(i,x) cout << R[i] << ' ';
  cout << L[x]-sumL << ' ';
  for(ll i=x+1; i<n; i++) cout << L[i] << ' ';
  cout << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/