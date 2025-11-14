#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<ll,ll>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  vector<P>xp(n);
  rep(i,n) cin >> xp[i].first;
  rep(i,n) cin >> xp[i].second;
  sort(xp.begin(),xp.end());
  vector<ll>X,P;
  rep(i,n){
    X.emplace_back(xp[i].first);
    P.emplace_back(xp[i].second);
  }
  rep(i,n-1) P[i+1]+=P[i];
  int q; cin >> q;
  rep(i,q){
    ll l,r; cin >> l >> r;
    ll L = lower_bound(X.begin(),X.end(),l)-X.begin();
    ll R = upper_bound(X.begin(),X.end(),r)-X.begin();
    if(L==P.size()||R==0){
      cout << 0 << endl;
      continue;
    }
    R--;
    if(L==0) cout << P[R] << endl;
    else cout << P[R]-P[L-1] << endl;
  }
  return 0;
}