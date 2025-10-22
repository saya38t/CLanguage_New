#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n,m;
  cin >> n >> m;
  vector<int>B(n),W(m);
  rep(i,n) cin >> B[i];
  rep(i,m) cin >> W[i];
  sort(B.rbegin(),B.rend());
  sort(W.rbegin(),W.rend());
  if(n-m>0) rep(i,n-m) W.emplace_back(0);
  vector<ll>imos(n),imosW(n);
  rep(i,n) {
    imos[i]=(ll)B[i]+W[i];
    imosW[i]=(ll)W[i];
  }
  rep(i,n-1) {
    imos[i+1]+=imos[i];
    imosW[i+1]+=imosW[i];
  }
  int l=n-1;
  rep(i,n) if(W[i]<0) {l=i;break;}
  l--;
  if(l<0) l=0;

  ll ans = 0;
  rep(i,n){
    ll k=imos[i];
    if(l<i) k-=imosW[i]-imosW[l+1];
    ans=max(ans,k);
    cout << imosW[i] << imosW[l+1] << endl;
  }
  cout << ans << endl;
  return 0;
}