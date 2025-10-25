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
 int n,m; cin >> n >> m;
  vector<string>S(2*n+1);
  rep(i,n*2) cin >> S[i+1];
  vector<P>p(n);
  rep(i,2*n) p[i]=pair(0,i+1);
  rep(i,m){
    rep(k,n){
      char a=S[p[2*k].second][i], b=S[p[2*k-1].second][i];
      if(a==b) continue;
      if(a=='G' && b=='C' || a=='C' && b=='P' || a=='P' && b=='G') p[2*k].first++;
      if(a=='C' && b=='G' || b=='C' && a=='P' || a=='P' && b=='G') p[2*k+1].first++;
    }
    sort(p.begin(),p.end());
  }
  return 0;
}