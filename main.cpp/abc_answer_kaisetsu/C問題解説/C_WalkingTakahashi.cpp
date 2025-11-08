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
  ll x,k,d;
  cin >> x >> k >>d;
  ll X =abs(x);
  ll q=X/d;
  ll r = X%d;
  if(q>=k){
    cout << X-k*d << endl;
    return 0;
  }
  if((k-q)%2==1) cout << d-r << endl;
  else cout << r << endl;
  return 0;
}