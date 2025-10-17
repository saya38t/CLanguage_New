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

//約数列挙
ll divisors(ll n){
    ll res=100000000000001LL;//なおした
    for(ll i=1; i*i<=n; i++){
        if(n%i==0) {
           res=min(res,(ll)n/i+i);
        }
    }
    return res;
}

int main(){
  ll n; cin >> n;
  ll ans;
  ans = (ll) divisors(n)-2;
  if(ans<0) ans=0;//なおした
  cout << ans << endl;
  return 0;
}
/*11min,1wa*/