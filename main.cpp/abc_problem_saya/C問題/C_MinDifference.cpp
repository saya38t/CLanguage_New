#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define _GLIBCXX_DEBUG//配列外参照防止
using ll = long long;
using P = pair<ll,char>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll>A(n);
    vector<ll>B(m);
    rep(i,n) cin >> A[i];
    rep(i,m) cin >> B[i];
    vector<ll>mB(m);
    rep(i,m) mB[i]=-B[i];
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(mB.begin(),mB.end());
    ll ans = 1e9;
    rep(i,n){
        int b = lower_bound(B.begin(),B.end(),A[i])-B.begin();
        int mb = lower_bound(mB.begin(),mB.end(),-A[i])-mB.begin();
        ll db = (ll) abs(B[b]-A[i]);
        ll dmb = (ll) abs(-mB[mb]-A[i]);
        ans = min({ans,db,dmb});
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/