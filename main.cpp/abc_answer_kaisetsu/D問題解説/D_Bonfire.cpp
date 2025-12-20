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
  ll n,r,c; cin >> n >> r >> c;
  ll R=0,C=0;
  set<P>st;
  st.emplace(pair(0,0));
  string S; cin >> S;
  string ans="";
  rep(i,n){
    if(S[i]=='N') {
      r++; R++;
    }
    else if(S[i]=='W') {
      c++; C++;
    }
    else if(S[i]=='S') {
      r--; R--;
    }
    else if(S[i]=='E') {
      c--; C--;
    }
    st.emplace(pair(R,C));
    if(st.count(pair(r,c))) ans+='1';
    else ans+='0';
  }
    cout << ans << endl;
  return 0;
}