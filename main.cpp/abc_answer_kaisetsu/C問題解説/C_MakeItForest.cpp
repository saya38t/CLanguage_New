#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//ACL使いたいときは↓↓「//」消してコードテストで確認、提出

//#include <atcoder/all>
//using namespace atcoder;

using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};
//union-find
int main(){
  int n,m; cin >> n >> m;
  int ans=0;
  dsu uf(n);//{0}~{n-1}の集合
  rep(i,m){
    int u,v; cin >> u >> v;
    u--; v--;
    if(uf.same(u,v)) {//u,vが同じ集合にあるか(既に森になってる頂点同士か)
      ans++;
      continue;
    }
    uf.merge(u,v);//{u}+{v}={u,v}(入力順に森をつくる)
  }
  cout << ans << endl;
  return 0;
}