#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};
const ll mod = 1e9+7;

int main(){
    int n;
    cin >> n;
    vector<ll>C(n);
    rep(i,n) cin >> C[i];
    sort(C.begin(),C.end());
    ll ans = 1;
    rep(i,n){
        ans *= (ll) (C[i]-i+mod)%mod;
        ans%=mod;
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/