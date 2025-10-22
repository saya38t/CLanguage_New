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
  vector<int>A(n+1);
  vector<int>B(n);
  rep(i,n+1) cin>>A[i];
  rep(i,n) cin>>B[i];
  ll ans=0;
  rep(i,n){
    ans+=(ll)min(A[i]+A[i+1],B[i]);
    //A[i+1]をいじりたい
    if(A[i]+A[i+1]<=B[i]) A[i+1]=0;
    else if(A[i]<B[i]) A[i+1]-=B[i]-A[i];
  }
  cout << ans << endl;
  return 0;

}
/*言い換えてシンプルに解く*/