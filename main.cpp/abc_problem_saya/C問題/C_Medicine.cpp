#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll n,k; cin>> n>>k;
    vector<P>vec(n+1);
    ll sum = 0;
    rep(i,n){
      ll a,b;
      cin >> a >> b;
      vec[i]=pair(a,b);
      sum+=b;
    }
    sort(vec.begin(),vec.end());
    vector<ll>rimos(n+1);
    rimos[0]=sum;
    rep(i,n) rimos[i+1]=-vec[i].second;
    rep(i,n) rimos[i+1]+=rimos[i];
    sort(rimos.begin(),rimos.end());
    //にぶたん
    int x = upper_bound(rimos.begin(),rimos.end(),k)-rimos.begin();
    //kを超えるとこ
    if(x>=rimos.size()-1) cout << 1 << endl;
    else cout << vec[n-x].first+1 << endl;
    return 0;
}