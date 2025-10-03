#define _GLIBCXX_DEBUG//配列外参照防止
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
    ll res=100000000001LL;//ll型統一、1e10はdouble
    for(ll i=1; i*i<=n; i++){
        if(n%i==0) {
           res=min(res,max((ll)n/i,(ll)i));
        }
    }
    //cout << res << endl;
    return res;
}

int main(){
    ll n;
    cin >> n;
    ll ans = divisors(n);
    int cnt = 0;
    while(ans){//ans>0
        ans/=10;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/*言い換えてシンプルに解く*/