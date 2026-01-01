#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll n; cin >> n;
  vector<ll>H(n);
  rep(i,n) cin>>H[i];
  ll ans=1;
  rep(i,n){//i個飛ばし
    ll s=0;
    rep(k,i+1) {//k番目スタート
      ll cnt=0;
      ll pre=H[k];
      rep(j,n/(i+1)+1) {
        if(k+j*(i+1)>=n) break;
        if(H[k+j*(i+1)]==pre) cnt++;
        else{
          chmax(ans,cnt);
          cnt=1;
          pre=H[k+j*(i+1)];
        }
      }
      chmax(ans,cnt);
    }
  }
  cout << ans << endl;
  return 0;
}