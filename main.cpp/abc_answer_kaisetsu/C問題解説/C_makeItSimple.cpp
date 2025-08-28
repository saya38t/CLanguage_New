#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>u(m);
    vector<int>v(m);
    rep(i,m) cin >> u[i] >> v[i];
    set<P>st;
    int ans = 0;
    rep(i,m){
        if(u[i]==v[i]) {
            ans++;
            continue;
        }
        else if(u[i]>v[i]) swap(u[i],v[i]);//swapでu[i]とv[i]を交換
        if(st.count(P(u[i],v[i]))) {//stに重複あるか
            ans++;
            continue;
        }
        st.emplace(u[i],v[i]);
    }
    cout << ans << endl;
    return 0;
}