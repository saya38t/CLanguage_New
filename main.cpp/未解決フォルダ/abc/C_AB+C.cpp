/*未解決ではないけどエラトステネスがんばったので供養*/

#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n;
    cin >> n;
    //エラトステネスの篩
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(ll i=2; i<n; ++i) {
        if (isPrime[i]) for (ll j = i*i; j <= n; j+=i) isPrime[j] = false;
    }

    vector<ll>p;
    rep(i,n+1)if(isPrime[i]) p.emplace_back(i);
    ll ans = 0;
    for(ll c=1;c<n; c++){
        ll N = n-c;
        while(N!=1){
            for(ll A:p){
                if(N%A==0){
                    while(N%A==0){
                    N/=A;
                    ans++;
                    }
                }
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/