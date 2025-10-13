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
  int n,q;
  cin >> n >> q;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  rep(i,n) A.emplace_back(A[i]);
  rep(i,2*n-1) A[i+1]+=A[i];

  int index=0;
  rep(i,q){
    int num; cin >> num;
    if(num==1){
      int c; cin >> c;
      index+=c;
      index%=n;
    }
    if(num==2){
      int l,r; cin >> l >> r;
      l+=index; l--; l%=n;
      r+=index; r--; r%=n;
      if(r<l) r+=n;
      if(l==0) cout << A[r]-0 << endl;
      else cout << A[r]-A[l-1] << endl;
    }
  }
  return 0;
}
/*言い換えてシンプルに解く*/