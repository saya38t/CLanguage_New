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
  rep(i,n) cin >> A[i];
  rep(i,n){
    bool exist = false;
    rep(j,i){
      if(A[i]<A[i-j-1]){
        cout << i-j << endl;
        exist =true;
        break;
      }
    }
    if(exist) continue;
    cout << -1 << endl;
  }
  return 0;
}