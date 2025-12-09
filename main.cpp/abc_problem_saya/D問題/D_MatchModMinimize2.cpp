#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll t; cin >> t;
  rep(i,t){
    ll n,m; cin >>  n >> m;
    vector<ll>A(n),B(n);
    ll sum=0;
    rep(j,n) {
      ll a;
      cin >> a;
      A[j]=a%m;
      sum+=(a%m);
    }
    rep(j,n) {
      ll a;
      cin >> a;
      B[j]=a%m;
      sum+=(a%m);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    rep(j,n){
      ll x = lower_bound(A.begin(),A.end(),m-B[j])-A.begin();
      if(x!=A.size()) {
        sum-=m;
        A.pop_back();
      }
    }
    cout << sum << endl;
  }
  return 0;
}