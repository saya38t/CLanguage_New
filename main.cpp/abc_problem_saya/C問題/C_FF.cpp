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
  int n,q;
  cin>>n>>q;
  //vectorで壊れるとき
  unordered_map<int, unordered_set<int>>twidai;//必要な要素だけ入れる
  //vector二次元配列は要素数大きいと壊れる(少なくとも10^5*10^5)
  rep(i,q){
    int t,a,b; cin>>t>>a>>b;
    if(t==1) twidai[a].emplace(b);//入れるとき
    else if(t==2) twidai[a].erase(b);//消すとき
    else cout << (twidai[a].count(b) && twidai[b].count(a) ? "Yes" : "No") <<endl;
  }
  return 0;
}