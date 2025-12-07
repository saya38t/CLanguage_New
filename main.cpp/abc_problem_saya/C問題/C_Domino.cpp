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

int main(){
  ll n; cin >> n;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  ll d=1;
  ll cnt=0;
  for(ll i=1; i<n+1; i++){
    if(i!=1 && i>=d) break;
    d=max(d,i+A[i-1]);
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}