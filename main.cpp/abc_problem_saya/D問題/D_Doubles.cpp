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
  ll n; cin>>n;
  vector<pair<ll,map<ll,ll>>>dize(n);
  rep(i,n){
    ll k; cin >> k;
    map<ll,ll>mp;
    rep(j,k){
      ll a; cin >> a;
      mp[a]++;
    }
    dize[i].first=k,dize[i].second=mp;
  }
  double ans=0;
  rep(i,n)for(ll j=i+1; j<n; j++){
    auto[Ki,mpi]=dize[i];
    auto[Kj,mpj]=dize[j];
    //Σ(mpi[a]*mpj[a])/Ki*Kj
    ll sum=0;
    if(mpj.size()>mpi.size()){
      for(auto[key,val]:mpi){
        if(mpj.count(key)) sum+=mpi[key]*mpj[key];
      }
    }
    else if(mpi.size()>=mpj.size()){
      for(auto[key,val]:mpj){
        if(mpi.count(key)) sum+=mpi[key]*mpj[key];
      }
    }
    chmax(ans,(double)sum/(Ki*Kj));
  }
  cout <<fixed << setprecision(15)<< ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/