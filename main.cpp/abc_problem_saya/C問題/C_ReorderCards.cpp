#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

//座標圧縮(map)
int main(){
  ll h,w,n; cin >> h >> w >> n;
  vector<P>ab(n);
  set<ll>ast;
  set<ll>bst;
  rep(i,n){
    ll a,b; cin >> a >> b;
    ab[i]=pair(a,b);
    ast.emplace(a);
    bst.emplace(b);
  }
  map<ll,ll>amp;
  map<ll,ll>bmp;
  ll cnt = 1;
  for(ll a:ast){
    amp[a]=cnt;
    cnt++;
  }
  cnt = 1;
  for(ll b:bst){
    bmp[b]=cnt;
    cnt++;
  }
  rep(i,n){
    ll a=ab[i].first,b=ab[i].second;
    cout << amp[a] << ' ' << bmp[b] << endl;
  }
  return 0;
}