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
    ll n;
    cin >> n;
    ll x=1000;
    ll ans=0;
    while(n>=x){
        ans+=n-x+1;
        x*=1000;
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/