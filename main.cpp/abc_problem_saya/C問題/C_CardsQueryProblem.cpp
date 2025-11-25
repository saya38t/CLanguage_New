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
  int n,q; cin >> n >> q;
  map<int,vector<int>>box;
  map<int,set<int>>num;
  rep(k,q){
    int s; cin >> s;
    if(s==1){
      int i,j; cin >> i >> j;
      box[j].emplace_back(i);
      num[i].emplace(j);
    }
    else if(s==2){
      int i; cin >> i;
      sort(box[i].begin(),box[i].end());
      rep(j,box[i].size()) cout << box[i][j]<<' ';
      cout << endl;
    }
    else if(s==3){
      int i; cin >> i;
      for(int a:num[i]) cout<<a<<' ';
      cout << endl;
    }
  }
  return 0;
}