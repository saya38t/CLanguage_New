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
    ll n,a,b;
    cin >> n >> a >> b;
    ll l=abs(b-a);
    ll ans;
    if(l%2==0) ans = l/2;
    else ans=min(a+(b-a-1)/2,n-b+1+(-a+b-1)/2);
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/