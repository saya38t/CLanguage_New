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
  ll h,w,k; cin >> h >> w >> k;
  vector<string>S(h);
  rep(i,h) cin >> S[i];
  //差分更新
  auto solve=[&](vector<string>S,ll H, ll W)->ll{
    ll res=1e18;
    rep(i,H){
      ll sx=0,se=0;
      rep(j,W){
        if(j>=k){
          sx-= S[i][j-k]=='x';
          se-= S[i][j-k]=='.';
        }
        sx+= S[i][j]=='x';
        se+= S[i][j]=='.';
        if(j>=k-1 && sx==0) chmin(res,se);
        //cout << sx << ','<< res <<endl;
      }
    }
    return res;
  };
  ll ans=1e18;
  chmin(ans,solve(S,h,w));

  //転置
  vector<string>T(w,"");
  rep(i,h)rep(j,w) T[j]+=S[i][j];
  chmin(ans,solve(T,w,h));

  if(ans==1e18) ans=-1;
  cout << ans << endl;
  return 0;
}
/*
auto f=[&](vector<int>A, int x){//ラムダ式}
*/