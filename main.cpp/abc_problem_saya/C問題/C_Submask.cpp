#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll n; cin >>n;
  ll N = n;
  int cnt=0;
  vector<int>C;
  while(N>0){
    if(N&1) C.emplace_back(cnt);
    cnt++;
    N=N>>1;
  }
  int m=C.size();
  vector<ll>BIT;
  rep(i,m){
    ll b=1;
    rep(j,C[i]) b*=2;
    BIT.emplace_back(b);
  }
  vector<ll>ans;
  rep(bit,(1<<m)){//bit全探索(ここで選び方決める)
    ll a=0;
    rep(i,m){//どれを選ぶか(整数型に復元)
      if(1 & (bit>>i))  a+=BIT[i];
    }
    ans.emplace_back(a);
  }
  sort(ans.begin(),ans.end());
  rep(i,ans.size()) cout << ans[i] <<'\n';
  return 0;
}