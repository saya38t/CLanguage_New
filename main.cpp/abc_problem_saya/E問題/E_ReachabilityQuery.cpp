#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#include <atcoder/all>
using namespace atcoder;//必要なときだけ

using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//UF解, DSU, union-find
//longlong仕様
int main(){
  ll n,q; cin >> n >> q;
  dsu uf(n);
  vector<bool>noir(n,false);
  map<ll,ll>mp;
  rep(i,q){
    ll num; cin >> num;
    if(num==1){
      ll u,v; cin >> u >> v;
      u--; v--;
      if(uf.same(u,v)) continue;
      ll V=uf.leader(v);//親の値を返す
      ll U=uf.leader(u);
      uf.merge(u,v);//親は小さい方になる
      ll b=uf.leader(u);
      mp[b]=(mp[U]+mp[V]);
    }
    else if(num==2){
      ll v; cin >> v;
      v--;
      ll b=uf.leader(v);
      if(noir[v]) {
        mp[b]--;
        noir[v]=false;
      }
      else{
        mp[b]++;
        noir[v]=true;
      }
    }
    else{
      ll v; cin >> v;
      v--;
      ll b=uf.leader(v);
      if(mp[b]>0) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}