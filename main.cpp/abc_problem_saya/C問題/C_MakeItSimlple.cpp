#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>u(m);
    vector<int>v(m);
    rep(i,m) cin >> u[i] >> v[i];
    set<pair<int,int>>st;
    rep(i,m){
        if(u[i]==v[i]) continue;
        st.emplace(min(u[i],v[i]), max(u[i],v[i]));
    }
    cout << m-st.size() << endl;
    return 0;
}
//はじめて？久々に？？
//自分でC問題解けたやつ！！