
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
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<ll>ans(1e6+1);
    vector<vector<int>>vec(1e6+1);//外側だけ指定(こうすれば0入らない)
    rep(i,n) vec[A[i]].emplace_back(i);
    ll x = 0;
    for(int i=1e6; i>-1; i--){
        ans[i]=x;
        x+=i*vec[i].size();
    }
    rep(i,n) cout << ans[A[i]] << ' ';
    cout << endl;
    return 0;
}
/*言い換えてシンプルに解く*/