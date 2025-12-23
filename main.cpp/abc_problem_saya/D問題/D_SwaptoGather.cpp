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
  string S; cin >> S;
  ll sum=0;
  ll now=-1;
  ll s,f;//スタート
  vector<ll>di;
  rep(i,n){
    if(S[i]=='1'){
      if(now==-1) {
        now=i;
        s=i;
      }
      di.emplace_back(i-now);
      sum+=i-now;
      now++;
      f=i;
    }
  }
  ll ans=sum;
  ll N=di.size();
  for(ll i=1; i<f-N; i++){
    ll x=lower_bound(di.begin(),di.end(),i)-di.begin();
    sum+=2*x-N;
    //sum=sum+x-(N-x)=sum+2*x-N
    chmin(ans,sum);
  }
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/