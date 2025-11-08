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
  string s; cin >> s;
  string ans = "atcoder";
  map<char,int> mp;
  rep(i,ans.size()){
    mp[ans[i]]=i;
  }
  int cnt =0;
  while(s!=ans){
    rep(i,s.size()-1){
      if(mp[s[i]]>mp[s[i+1]]){
        char si=s[i],sii=s[i+1];
        s[i]=sii; s[i+1]=si;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}