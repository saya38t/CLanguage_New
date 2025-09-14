#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n,r;
    cin >> n >> r;
    vector<ll>l(n);
    rep(i,n) cin >> l[i];
    ll m=-1,h=-1;
    for(ll i=r-1; i>-1 ;i--) {
        if(l[i]==0){
            m=(ll)i;
            break;
        }
    }
    for(ll i=r; i<n; i++){
        if(l[i]==0){
            h=(ll)i;
            break;
        }
    }
    if(h==-1) h=r-1;
    if(m==-1) m=r;
    ll ans = 0LL;
    for(ll i=m; i<h+1;i++){
        if(l[i]==0) ans++;
        else ans+=2;
    }
    cout << h << m << endl;
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/