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
  int n; cin>>n;
  ll ans=0;
  rep(i,n){
    int a; cin>>a;
    if(a%2==0)while(a>0){
      ans++;
      a/=2;
      if(a%2!=0) break;
    }
  }
  cout <<ans<<endl;
  return 0;
}