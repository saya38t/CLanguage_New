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
  int x,n; cin >> x >> n;
  vector<int>w(n+1);
  rep(i,n) cin >> w[i+1];
  int q; cin >> q;
  vector<bool>have(n+1);
  rep(i,q){
    int p; cin >> p;
    if(have[p]){
      x-=w[p];
      have[p]=false;
    }
    else {
      x+=w[p];
      have[p]=true;
    }
    cout << x << endl;
  }
  return 0;
}