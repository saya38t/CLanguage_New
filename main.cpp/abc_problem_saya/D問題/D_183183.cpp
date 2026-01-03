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
  ll n,m ; cin >> n >> m;
  vector<string>A(n);
  rep(i,n) cin >> A[i];
  vector<map<ll,vector<ll>>>mp(11);
  vector<ll>ten(11);
  ten[0]=1;
  rep(i,10) ten[i+1]=ten[i]*10;
  rep(i,n){//mp[桁数][mod]=vec(i)
    ll x=A[i].size();
    mp[x][stoll(A[i])%m].emplace_back(i);
  }
  ll cnt =0;
  rep(i,n){
    for(ll x=1; x<=10; x++){
      //cout << mp[x][0].size() << endl;
      if(mp[x].size()==0) continue;
      ll M=m-((ten[x]%m)*(stoll(A[i])%m)+m)%m;
      if(M==m) M=0;
      if(mp[x].count(M)) cnt+=mp[x][M].size();
    }
  }
  cout << cnt << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/