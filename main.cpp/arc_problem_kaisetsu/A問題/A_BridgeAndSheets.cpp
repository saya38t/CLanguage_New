#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    ll L,W;
    cin >> n >> L >> W;
    vector<ll>a(n+1,L);
    rep(i,n) cin >> a[i];
    ll r=0LL;//longlongを明確に固定
    ll ans=0LL;
    rep(i,n+1){
        if(r<a[i]) ans+=(a[i]-r+W-1)/W;//%=0はwを足したくないので-1
        r=a[i]+W;
    }
    cout << ans << endl;
    return 0;
}
/*解く！！*/