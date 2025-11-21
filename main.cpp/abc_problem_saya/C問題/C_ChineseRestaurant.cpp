#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  vector<int>p(n);
  rep(i,n) cin >> p[i];
  map<int,int> mp;
  rep(i,n){
    int x=p[i]-i, y=(p[i]+1)%n-i, z = (p[i]-1+n)%n-i;
    if(x<0) x+=n;
    if(y<0) y+=n;
    if(z<0) z+=n;
    mp[x]++; mp[y]++; mp[z]++;
  }
  int ans = 0;
  for(auto [key,val]:mp) ans = max(ans,val);
  cout << ans << endl;
  return 0;
}