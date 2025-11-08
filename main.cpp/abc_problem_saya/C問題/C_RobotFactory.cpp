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
  int n,m,k; cin >> n >> m >> k;
  vector<int>H(n),B(m);
  rep(i,n) cin >> H[i];
  rep(i,m) cin >> B[i];
  sort(H.rbegin(),H.rend());
  sort(B.begin(),B.end());
  int cnt = 0;
  rep(i,n){
    int x = lower_bound(B.begin(),B.end(),H[i])-B.begin();
    if(x!=B.size()){
      B.pop_back();
      cnt++;
    }
  }
  if(cnt>=k) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}