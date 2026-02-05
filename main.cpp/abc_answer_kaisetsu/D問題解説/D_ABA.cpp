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
  string S; cin >> S;
  vector<ll>r(26),l(26);
  ll n=S.size();
  rep(i,n) r[S[i]-'A']++;
  ll sum=0;
  rep(i,n){
    ll now=S[i]-'A';
    r[now]--;
    if(i>0 && i<n-1) rep(j,26) sum+=r[j]*l[j];
    l[now]++;
  }
  cout << sum << endl;
  return 0;
}