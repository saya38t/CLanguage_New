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
  ll n,m; cin >> n >> m;
  map<ll,vector<ll>>mp;
  rep(i,m){
    ll a,b; cin >> a >> b;
    a--; b--;
    mp[a].emplace_back(b);
    mp[b].emplace_back(a);
  }
  vector<bool>vis(n,false);
  ll ans=0;
  //bfs
  rep(i,n){
    if(vis[i]) continue;
    if(mp[i].size()==0) continue;
    set<ll>st;
    st.emplace(i);
    queue<ll>Q;
    Q.push(i);
    while(!Q.empty()){
      ll tp=Q.front(); Q.pop();
      vis[tp]=true;
      for(ll z:mp[tp]){
        if(vis[z]) continue;
        st.emplace(z);
        if(mp[z].size()==0) continue;
        Q.push(z);
      }
    }
    ans+=st.size()*(st.size()-1)/2;
  }
  cout << ans-m << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/