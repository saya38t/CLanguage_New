#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=1; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  int N = round(sqrt(n));
  map<int,int>mp;
  rep(x,N+1)rep(y,N+1)rep(z,N+1){
    int k=x*x+y*y+z*z+x*y+y*z+z*x;
    mp[k]++;
  }
  cout << 0 << endl;
  rep(i,n){
    if(mp.find(i+1)!=mp.end()) cout << mp[i+1] << '\n';
    else cout << 0 <<'\n';
  }
  return 0;
}
//27min