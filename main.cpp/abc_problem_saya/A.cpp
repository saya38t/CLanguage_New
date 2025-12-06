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
  ll n,m ;cin >> n >> m;
  map<ll,vector<ll>>mp;
  rep(i,m){
    ll x,y; cin >> x >> y;
    mp[x].emplace_back(y);
  }
  map<ll,vector<ll>>mmp;
  auto bfs = [&](ll key) -> void {
    queue<ll>que;
    vector<bool>vis(n+1,false);
    que.push(key);
    while(!que.empty()){
      ll t=que.front(); que.pop();
      mmp[t].emplace_back(t);
      vis[t]=true;
      for(ll x:mp[t]) {
        if(vis[x]) continue;
        que.push(x);
        mmp[x].emplace_back(x);
        vis[x]=true;
      }
    }
  };
  for(auto[key,val]:mp){
    bfs(key);
  }
  for(ll x:mp[1]) cout << x << ' ';
  cout << endl;
  vector<bool>isblack(n+1);
  ll q; cin >> q;
  rep(i,q){
    int num,v; cin >> num>>v;
    if(num==1){
      isblack[v]=true;
      rep(j,n){
        if(isblack[j+1]) continue;
        vector<ll>arr=mmp[j+1];
        if (find(arr.begin(), arr.end(), v) != arr.end()) isblack[j+1]=true;
      }
    }
    else{
      if(isblack[v]) cout << "Yes"<< endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}