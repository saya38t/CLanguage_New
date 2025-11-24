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
  int n; cin>> n;
  vector<string>S(n);
  rep(i,n) cin >> S[i];
  map<char,int>mp;
  rep(i,S[0].size()) mp[S[0][i]]++;
  rep(i,n){
    map<char,int>mmp;
    rep(j,S[i].size()) mmp[S[i][j]]++;
    for(auto [key,val]: mp) if(mmp[key]<val) mp[key]=mmp[key];
  }
  vector<char>ans;
  for(auto [key,val]: mp) rep(i,val) ans.emplace_back(key);
  sort(ans.begin(),ans.end());
  rep(i,ans.size()) cout << ans[i];
  cout << endl;
  return 0;
}