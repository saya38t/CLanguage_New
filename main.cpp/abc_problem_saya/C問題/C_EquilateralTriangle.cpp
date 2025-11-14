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
  int n,l; cin >> n >> l;
  map<int,int>mp;
  mp[0]++;
  ll prev = 0;
  rep(i,n-1){
    int d; cin >> d;
    prev = (prev+d+l)%l;
    mp[prev]++;
  }
  int D = l/3;
  if(D*3!=l){
    cout << 0 << endl;
    return 0;
  }
  ll ans = 0;
  for(auto [key,val] :mp) {
    int d=(key+D)%l, dd = (key+2*D)%l;
    if(mp.count(d) && mp.count(dd)){
      ans += (ll)val*mp[d]*mp[dd];
    }
  }
  cout << ans/3 << endl;
  return 0;
}