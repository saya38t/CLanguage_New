#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
  ll n,x,y; cin >> n >> x >> y;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  ll MIN=0, MAX=A[n-1]*y;
  rep(i,n){
    MIN = max((ll)A[i]*x,MIN);
    MAX = min((ll)A[i]*y,MAX);
  }
  if(MAX-MIN<0){
    cout << -1 << endl;
    return 0;
  }
  ll G = MAX, ans = 0;
  rep(i,n) {
    if((G-A[i]*x)%(y-x)!=0){
      cout << -1 << endl;
      return 0;
    }
    ans += (G-A[i]*x)/(y-x);
  }
  cout << ans << endl;
  return 0;
}