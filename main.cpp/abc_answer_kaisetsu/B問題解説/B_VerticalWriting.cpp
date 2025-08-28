#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    int m=0;
    rep(i,n) m = max(m, (int)s[i].size());
    vector<string> t(m,string(n,'*'));//二次配列文字列

    rep(i,n)rep(j,s[i].length()){
        t[j][n-1-i] = s[i][j];//
    }
    rep(i,m){
        while(t[i].back()=='*') t[i].pop_back();//back()
    }
    rep(i,m) cout << t[i] << endl;

    return 0;

}