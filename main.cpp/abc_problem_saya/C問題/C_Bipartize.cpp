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
  int n,m;
  cin >> n>> m;
  vector<P>edge;
  rep(i,m){
    int u,v; cin>> u >> v;
    u--; v--;
    edge.emplace_back(P(u,v));
  }
  int ans = m;
  for(int s=1; s<(1<<n); s++){//ビット全探索(<<で2倍,>>で1/2)
    int cnt = 0;
    vector<int>color(n);
    rep(i,n){
      if(s>>i &1){//i桁目が1
        color[i]=1;
      }
    }
    rep(i,m){
      int u=edge[i].first, v=edge[i].second;
      if(color[u]==color[v]) cnt++;
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
  return 0;
}
/*言い換えてシンプルに解く*/