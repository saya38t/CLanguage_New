//３項演算子
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    vector<int>l(m);
    vector<int>r(m);
    rep(i,m) cin >> l[i] >> r[i];
    vector<int>check(n+2);
    rep(i,m){
        check[l[i]]++;
        check[r[i]+1]--;
    }
    rep(i,n+1) check[i+1]+=check[i];
    string ans;
    rep(i,n) check[i+1]%2==0 ? ans+=s[i] : ans+=t[i];
    cout << ans << endl;
    return 0;
}