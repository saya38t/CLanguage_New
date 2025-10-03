#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};
const ll mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<ll>p(1001);
    //素因数分解
    //約数の個数
    auto prmdvs= [&](int k)-> void{ //値変えるなら参照渡し！
        for(ll i=2; i*i<=k; i++){
            if(k%i!=0) continue;
            while(k%i==0){
                k/=i;
                p[i]++; //約数の個数はwhileの中で
            }
        }
        if(k!=1) p[k]++; //k=2,3は2<=i && i*i<kから除外されるので場合分けする
    };
    rep(i,n){
        ll k=i+1;
        prmdvs(k);
    }
    ll ans = 1;
    rep(i,1001){if(p[i]!=0) {
        ans*=(p[i]+1+mod)%mod;//modあるとき忘れずに！！
        ans%=mod;
        //cout << p[i] << ',' << i << endl;
    }}
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/