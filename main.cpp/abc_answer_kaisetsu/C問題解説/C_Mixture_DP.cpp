#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

//bitDP
void solve(){
  int n; string S;
  cin >> n >> S;
  ll N=(1<<n);
  vector<bool>reach(N,false);
  reach[0]=true;
  rep(i,N){
    if(!reach[i]) continue;
    rep(j,n){
      ll ni=i|(1<<j);
      if(ni==i) continue;
      if(S[ni-1]=='1') continue;
      if(reach[ni]) continue;
      reach[ni]=true;
    }
  }
  if(reach[N-1]) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main(){
  ll t; cin >> t;
  rep(i,t) solve();
  return 0;
}