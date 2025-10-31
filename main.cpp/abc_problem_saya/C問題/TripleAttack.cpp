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
  ll T=1;
  vector<int>S={3,1,1,3,1,1};
  rep(i,n){
    int s=T%3;//1
    int k=H[i]%5;//2
    T+=(H[i]/5)*3;
    while(k>0){
      T++;
      k-=S[s];
      s++;
    }
  }
  T--;
  cout << T << endl;
  return 0;
}
//42min