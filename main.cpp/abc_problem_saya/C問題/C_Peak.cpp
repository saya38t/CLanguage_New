#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<ll,ll>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll n,m; cin >> n >> m;
  vector<ll>A(n);
  rep(i,n) cin >> A[i];
  sort(A.begin(),A.end());
  map<ll,ll>imos;
  rep(i,n) imos[A[i]]++;
  int pre=A[0];
  rep(i,n-1){
    if(pre!=A[i+1]) imos[A[i+1]]+=imos[pre];
    if(A[i+1]!=pre) pre=A[i+1];
  }
  //rep(i,k+1) cout << imos[i] << endl;
  ll ans = 0;
  rep(i,n){
    ll a = lower_bound(A.begin(),A.end(),A[i]+m)-A.begin();
    //A[i]+m以上の存在する座標
    ll s=A[a-1];
    if(i==0) ans=max(ans,imos[s]);
    else ans=max(ans,imos[s]-imos[A[i-1]]);
  }
  cout << ans << endl;
  return 0;

}
/*にぶたん*/