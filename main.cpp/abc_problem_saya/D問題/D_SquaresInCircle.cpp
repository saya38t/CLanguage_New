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

//longlong仕様
int main(){
  ll r; cin >> r;
  ll R=r*r;
  ll cnt=0;
  ll maxj=0;
  rep(i,r){
    ll I=i*i;
    if(R-(I+i+0.25)>=0 && R-(I-i+0.25)>=0){//jがある
      ll j=min(sqrtl((long double)R-I-i-0.25),sqrtl((long double)R-I+i-0.25));
      if(j==0) continue;
      if((long double)j*j+j+i*i+i+0.5>(long double)R) j--;
      cnt+=(j+1);
      chmax(maxj,j);
      //cout << cnt << endl;
      //cout << j << ',' << R-I-i-1/4<< endl;
    }
  }
  cnt*=4;
  cnt-=(maxj+1)*4-1;
  if(cnt<0) cnt=1;
  cout << cnt << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/