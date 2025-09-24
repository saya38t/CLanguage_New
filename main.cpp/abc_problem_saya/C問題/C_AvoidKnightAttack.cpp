#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<ll,ll>;
const double PI = acos(-1); //π
const vector<int>di={2,1,-1,-2,-2,-1,1,2};//駒移動(8)
const vector<int>dj={1,2,2,1,-1,-2,-2,-1};

int main(){
    ll n;
    int m;
    cin >> n >> m;
    set<P>st;
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        st.emplace(pair(a,b));
        rep(k,8){
            ll I,J;
            I=a+di[k]; J=b+dj[k];
            if(I<0||I>n-1||J<0||J>n-1) continue;
            st.emplace(pair(I,J));
        }
    }
    ll ans = 0;
    ans = n*n-st.size();
    cout << ans << endl;
}
/*言い換えてシンプルに解く*/