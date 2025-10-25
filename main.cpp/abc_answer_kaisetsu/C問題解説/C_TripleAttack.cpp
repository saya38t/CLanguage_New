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
  int n; cin >> n;
  vector<ll>H(n);
  rep(i,n) cin >> H[i];
  ll T =0;
  rep(i,n){
    if(H[i]<=0) continue;
    int x = H[i]/5;
    T+=x*3;
    H[i]-=x*5;
    while(H[i]>0){
      T++;
      if(T%3==0) H[i]-=3;
      H[i]--;
    }
  }
  cout << T << endl;
  return 0;
}