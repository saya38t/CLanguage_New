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
  ll n,k;
  cin >> n >> k;
  vector<ll>p(n);
  rep(i,n) cin >> p[i];
  vector<ll>imos=p;
  rep(i,n-1)imos[i+1]+=imos[i];
  ll sum = 0;
  rep(i,n-k+1){
    if(i>0)sum=max(sum,imos[i+k-1]-imos[i-1]);
    else sum=max(sum,imos[k-1]);
  }
  cout <<fixed<< setprecision(10)<<(double)(sum+k)/2<< endl;
  //テストケースの出力に合わせた出力を！
  return 0;
}