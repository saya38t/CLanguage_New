#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  map<int,vector<int>>mp;
  set<int>flavor;
  rep(i,n){
    int f, s; cin >> f >> s;
    mp[f].emplace_back(s);
    flavor.emplace(f);
  }
  vector<int>mx;
  ll ans=0;
  //
  for(int i: flavor) {
    sort(mp[i].rbegin(),mp[i].rend());
    mx.emplace_back(mp[i][0]);//各フレーバーでかいやつだけ入れる
    //cout << mx.size() << endl;
    if(mp[i].size()>=2) ans=max(ans,(ll)mp[i][0]+mp[i][1]/2);
  }
  sort(mx.rbegin(),mx.rend());
  if(mx.size()>=2) ans=max(ans,(ll)mx[0]+mx[1]);//なおした
  cout << ans << endl;

  return 0;
}
/*言い換えてシンプルに解く*/