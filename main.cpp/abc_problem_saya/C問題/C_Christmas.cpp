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
  ll ans=10000000001LL;
  int k,n; cin >> n >> k;
  vector<ll>h(n);
  rep(i,n) cin >> h[i];
  sort(h.begin(), h.end());
  int i=0;
  while(i+k-1<n){
    ans=min(ans,h[i+k-1]-h[i]);
    i++;
  }
  cout << ans << endl;
  return 0;
}
/*3.5min*/