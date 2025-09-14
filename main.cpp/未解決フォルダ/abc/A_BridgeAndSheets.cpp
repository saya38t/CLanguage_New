/*未解決！！！！*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n,l,w;
    cin >> n >> l >> w;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<int>rui(l+2);
    rep(i,n){
        rui[a[i]]++;
        rui[a[i]+w]--;
    }
    rep(i,l+1) rui[i+1]+=rui[i];
    bool hi=true,mi=false;
    vector<ll>lef;
    vector<ll>rig;
    rep(i,l+1){
        if(hi&&rui[i]==0) {
            lef.emplace_back(i);
            hi=false;
            mi=true;
        }
        if(mi&&rui[i]!=0){
            rig.emplace_back(i);
            mi=false;
            hi=true;
        }
    }
    ll m = lef.size();
    ll cnt = 0;
    ll hypo = -1;
    if(rig.size()<lef.size()) rig.emplace_back(l);
    rep(i,m){
        if(lef[i]<hypo) lef[i]=hypo;
        if(rig[i]-lef[i]>-1){
            cnt+=((rig[i]-lef[i])/w);
            ll am=(rig[i]-lef[i])%w;
            if(am!=0) {
                cnt++;
                hypo=rig[i]-m+w;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
/**/