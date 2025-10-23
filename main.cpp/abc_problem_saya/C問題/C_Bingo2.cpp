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
  int n,t;
  cin >> n >> t;
  map<int,vector<int>>hori;//横
  map<int,vector<int>>verti;//縦
  vector<int>lcross;
  vector<int>rcross;
  rep(i,t){
    int a; cin >> a;
    hori[(a-1)/n].emplace_back(a);
    verti[(a-1)%n].emplace_back(a);
    if((a-1)/n==(a-1)%n) lcross.emplace_back(a);
    if((a-1)/n+(a-1)%n==n-1) rcross.emplace_back(a);
    if(hori[(a-1)/n].size()==n || verti[(a-1)%n].size()==n || lcross.size()==n || rcross.size()==n){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}