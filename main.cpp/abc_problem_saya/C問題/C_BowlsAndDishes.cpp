#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n,m; cin >> n >>m;
  vector<P>AB(m);
  rep(i,m) cin >> AB[i].first >> AB[i].second;
  int k; cin >> k;
  vector<P>CD(k);
  rep(i,k) cin >> CD[i].first >> CD[i].second;
  int ans = 0;
  for(ll s=0; s<(1<<k); s++){//ビット全探索
    int score=0;
    map<int,int>mp;
    rep(i,k){
      if(s>>i &1){//i桁目が1なら
        mp[CD[i].first]++;
      }
      else mp[CD[i].second]++;
    }
    rep(i,m) if(mp.count(AB[i].first)&&mp.count(AB[i].second)) score++;
    chmax(ans,score);
  }
  cout << ans << endl;
  return 0;
}
//29min