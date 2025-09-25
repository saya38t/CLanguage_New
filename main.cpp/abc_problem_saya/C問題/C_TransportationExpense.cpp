#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n; ll m;
    cin >> n >> m;
    vector<ll>A(n);
    rep(i,n) cin >> A[i];
    auto f = [&](ll x) -> bool {//ラムダ式(bool)
        ll sum = 0;
        rep(i,n) sum += min(x,A[i]);
        return sum<=m;//満たせばtrue,elseはfalse
    };//カンマ忘れがち
    ll inf = 1e9+1;
    if(f(inf)){
        cout << "infinite" << endl;
        return 0;
    }
    //二分探索(自力実装)
    ll l=0, r=inf;//lまでtrue,rからfalseを目指したい
    while(l+1<r){
        ll m = (l+r)/2;
        if(f(m)) l=m; else r=m;
    }
    cout << l << endl;
    return 0;
}