#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll t;
  cin >> t;
  rep(i,t){
    ll n,h; cin >> n >>h;
    ll L=h,U=h,T=0;//スタート
    bool ng=false;
    rep(i,n){
      ll t,l,u; cin >> t >> l >> u;
      L=max(L-(t-T),l); U=min(U+(t-T),u);
      T=t;
      if(U<L) ng=true;
    }
    if(ng) cout << "No"<< endl;
    else cout << "Yes" << endl;
  }
  return 0;
}