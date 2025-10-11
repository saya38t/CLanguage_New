#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n;
  cin >> n;
  vector<int>S(n); rep(i,n) cin >> S[i];
  vector<int>T(n); rep(i,n) cin >> T[i];
  rep(i,2*n){
    int j=(i+n)%n;
    int t=T[j]+S[j];
    T[(j+1+n)%n]=min(t,T[(j+1+n)%n]);
  }
  rep(i,n) cout << T[i] << endl;
  return 0;
}