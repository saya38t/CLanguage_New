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
  int n,m; cin >> n >> m;
  vector<string>S(n);
  rep(i,n) cin >> S[i];
  set<string>st;
  int chk = m*m;
  rep(i,n)rep(j,n){
    string s="";
    rep(k,m){
      int I=i+k;
      if(I>=n) continue;
      rep(l,m){
        int J=j+l;
        if(J>=n) continue;
        s+=S[I][J];
      }
    }
    if(s.size()==chk) st.emplace(s);
  }
  cout << st.size() << endl;
  return 0;
}