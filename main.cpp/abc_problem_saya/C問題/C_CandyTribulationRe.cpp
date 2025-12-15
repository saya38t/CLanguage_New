#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//ACL使いたいときは↓↓「//」消してコードテストで確認、提出

//#include <atcoder/all>
//using namespace atcoder;

using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};

//longlong仕様
int main(){
  ll n,x,y; cin >> n >> x >> y;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  ll cnt=A[0];
  ll XY=y-x;
  ll pre=A[0];
  rep(i,n-1){
    if(((A[i]-A[i+1])*x)%XY!=0) {
      cout << -1 << endl;
      return 0;
    }
    cnt+=((A[i]-A[i+1])*x)/XY+pre;
    pre=((A[i]-A[i+1])*x)/XY+pre;
    if(pre<0){
      cout << -1 << endl;
      return 0;
    }
  }
  cout << cnt << endl;
  return 0;
}