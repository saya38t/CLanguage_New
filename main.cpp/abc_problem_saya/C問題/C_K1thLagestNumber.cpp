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
  vector<int>A(n);
  set<int>st;
  rep(i,n) {
    cin >> A[i];
    st.emplace(A[i]);
  }
  vector<int>a;
  for(int S: st) a.emplace_back(S);
  int m=a.size();
  map<int,int>mp;
  rep(i,n){
    int b = upper_bound(a.begin(),a.end(),A[i])-a.begin();
    mp[m-b]++;
  }
  rep(i,n){
    if(mp.find(i)!=mp.end()) cout << mp[i] << endl;
    else cout << 0 << endl;
  }
  return 0;
}