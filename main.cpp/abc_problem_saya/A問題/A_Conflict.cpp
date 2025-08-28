#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    string t, a;
    cin >> n >> t >> a;
    rep(i,n) {
        if(t[i]==a[i]&&t[i]=='o'&&a[i]=='o') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
/*
Ai, Ti
oほしい
xほしくない
どっちもoの商品あるかないか
*/