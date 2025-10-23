#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n,m; cin >> n >> m;
  vector<bool>AC(n+1);
  map<int,int>mp;
  rep(i,m){
    int p; string s; cin >> p >> s;
    if(!AC[p]){
      if(s=="WA") mp[p]++;
      else AC[p]=true;
    }
  }
  ll ac = 0,pena = 0;
  rep(i,n+1) {
    if(AC[i]){
      ac++;
      pena+= mp[i];
    }
  }
  cout << ac << ' ' << pena << endl;
  return 0;

}
//17min