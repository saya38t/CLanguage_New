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
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  vector<ll>imos;
  imos.emplace_back(0);
  for(int i=1; i<n/2+1; i++){
    imos.emplace_back(A[2*i]-A[2*i-1]);
  }
  rep(i,imos.size()-1) imos[i+1]+=imos[i];

  int q; cin >> q;
  rep(i,q){
    ll l,r; cin >> l >> r;
    ll plus=0;
    int L = lower_bound(A.begin(),A.end(),l)-A.begin();
    if(L==A.size()){
      cout << 0 << endl;
      continue;
    }
    if(L%2==0) plus+=A[L]-l;
    int R = lower_bound(A.begin(),A.end(),r)-A.begin();
    if(R%2==0) plus+=r-A[R-1];
    cout << imos[(R-1)/2]-imos[L/2]+plus << endl;
  }
  return 0;
}