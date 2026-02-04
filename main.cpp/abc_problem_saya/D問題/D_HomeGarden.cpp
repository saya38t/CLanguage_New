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
  ll q; cin >> q;
  ll r=0,sumt=0,cnt=0;
  queue<ll>Q;
  queue<ll>T;
  T.push(0);
  rep(i,q){
    ll num; cin >> num;
    if(num==1){
      r++;
    }
    else if(num==2){
      ll t; cin >> t;
      sumt+=t;
      T.push(sumt);
      Q.push(r);
      r=0;
      cnt++;
    }
    else{
      ll h; cin >> h;
      ll chk=sumt-h;
      ll ans = 0;
      while(!T.empty()){
        ll tp=T.front();
        if(tp>chk) break;
        if(tp<=chk){
          T.pop();
          ans+=Q.front();
          Q.pop();
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/