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
  string s;
  cin >> s;
  string t = "atcoder";
  map<char,int>mp;
  rep(i,s.size()) mp[t[i]]=i;
  ll ans=0;
  rep(i,s.size())rep(j,i){
    if(mp[s[j]]>mp[s[i]]) ans++;
  }
  cout << ans << endl;
  return 0;
}
//転倒数、交差する数を大小で数える二重ループ