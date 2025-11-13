#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n; cin >> n;
    vector<ll>a(n);
    rep(i,n) cin >> a[i];
    map<ll,ll>mp;
    rep(i,n)for(int k=-1;k<2;k++){
        mp[a[i]+k]++;
    }
    ll ans = 0;
    for(auto [key,val] :mp) ans=max(ans,val);//値を取り出す
    cout << ans << endl;
    return 0;
}