#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
/*
#include <atcoder/all>
using namespace atcoder;//必要なときだけ
*/
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<ll>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<ll>dj={1,-1,0,1,-1,-1,1,0};
const ll mod=998244353;

//longlong仕様
int main(){
  ll n,m; cin >> n >> m;
  vector<ll>A(n),B(m);
  rep(i,n) cin >> A[i];
  rep(i,m) cin >> B[i];
  sort(A.begin(),A.end());
  vector<ll>S=A;
  rep(i,n-1){
    S[i+1]+=S[i];
  }
  ll ans = 0;
  rep(i,m){
    ll x = upper_bound(A.begin(),A.end(),B[i])-A.begin();
    ll sum;
    if(x==0) sum=S[n-1]-B[i]*n;
    else if(x!=n) sum=S[n-1]-2*S[x-1]-B[i]*(n-2*x);
    else sum=-(S[x-1]-B[i]*x);
    //S[n-1]-S[x-1]-B[i]*(n-x)-(S[x-1]-B[i]*x)=S[n-1]-2*S[x-1]-B[i]*(n-2*x);
    sum%=mod;
    ans+=sum;
    ans%=mod;
  }
  cout << ans << endl;
  return 0;
}
