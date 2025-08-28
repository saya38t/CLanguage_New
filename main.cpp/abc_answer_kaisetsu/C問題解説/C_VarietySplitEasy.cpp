#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<int>l(n+1);
    vector<int>r(n);
    set<int>stl;
    set<int>str;
    //l
    rep(i,n){
        stl.emplace(A[i]);
        l[i+1] = stl.size();
    }
    //r
    for(int i=n-1; i>-1; i--){
        str.emplace(A[i]);
        r[i] = str.size();
    }
    int ans = 0;
    rep(i,n) ans = max(ans,l[i] + r[i]);
    cout << ans << endl;
    return 0;
}