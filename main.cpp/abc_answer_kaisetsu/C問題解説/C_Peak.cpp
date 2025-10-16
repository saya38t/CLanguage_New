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
  int n,m; cin >> n>>m;
  vector<int>A(n); rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  int l=0;
  int ans=0;
  rep(i,n){
    while(l<n && A[l]<A[i]+m){
      l++;
    }
    ans=max(ans,l-i);
  }
  cout << ans << endl;
  return 0;
}
//しゃくとり