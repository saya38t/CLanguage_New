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
//最小公倍数(オリジナル)
int main(){
    int n; cin >> n;
    unordered_set<ll>st;
    rep(i,n){
        ll t; cin >> t;
        st.emplace(t);
    }
    vector<ll>T;
    for(ll x:st) T.emplace_back(x);
    sort(T.rbegin(),T.rend());
    ll ans = T[0];

    auto divisors=[&](ll n)->void{//ラムダ式
        for(ll i=2; i*i<=n; i++){
            if(n%i!=0) continue;
            ll I=1;
            while(n%i==0) {
                n/=i;I*=i;
                if(ans%I!=0) ans*=i;
            }
        }
        if(n!=1 && ans%n!=0) ans*=n;
    };
    rep(i,T.size()-1) {
        if(ans%T[i+1]!=0) divisors(T[i+1]);
    }
    cout << ans << endl;
    return 0;
}