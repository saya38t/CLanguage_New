//findで値を探してその都度消す
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,m){
        int b;
        cin >> b;
        auto it = find(a.begin(), a.end(), b);
        if(it==a.end()) continue;
        a.erase(it);
    }
    rep(i,a.size()) cout << a[i] << ' ';
    cout << endl;
    return 0;
}