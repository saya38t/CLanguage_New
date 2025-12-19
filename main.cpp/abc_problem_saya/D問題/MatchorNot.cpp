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
  string S; string T; cin >> S >> T;
  ll tsz=T.size(),ssz=S.size();
  vector<bool>ok(tsz+1,true);
  bool l=true,r=true;
  rep(i,tsz){//前から
    if(l==false){
      ok[i+1]=false;
      continue;
    }
    if(S[i]!='?' && T[i]!='?' && S[i]!=T[i]) {
      l=false;
      ok[i+1]=l;
    }
  }
  rep(i,tsz){//後ろから
    if(r==false){
      ok[tsz-i-1]=false;
      continue;
    }
    if(S[ssz-i-1]!='?' && T[tsz-i-1]!='?' && S[ssz-i-1]!=T[tsz-i-1]){
      r=false;
      ok[tsz-i-1]=false;
    }
  }
  rep(i,tsz+1){
    if(ok[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}