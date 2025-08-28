#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<string>W(n);
    rep(i,n) cin >> W[i];
    set<string>check;
    rep(i,n) check.emplace(W[i]);
    if(check.size()<W.size()) {
        cout << "No" << endl;
        return 0;
    }
    rep(i,n-1){
        if(W[i].back() != W[i+1][0]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}