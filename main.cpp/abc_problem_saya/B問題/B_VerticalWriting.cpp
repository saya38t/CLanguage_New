#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string>s(n);
    rep(i,n) cin >> s[i];
    int m = 0;
    rep(i,n) if(m < s[i].length()) m = s[i].length();//M
    vector<string>t(m);
    rep(j,m)rep(i,n){
        if(s[i].length()<j+1) {
            t[j].push_back('*');
            continue;
        }
        t[j].push_back(s[i].at(j));
    }
    rep(j,m) cout << t[j] << endl;//なんでか向きが変わる
    //**を消す処理が必要
    return 0;

}