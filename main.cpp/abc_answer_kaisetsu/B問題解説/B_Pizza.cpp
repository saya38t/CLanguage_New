#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<int>simple(n+2);
    simple[0] = 0;
    simple[n+1] = 360;
    int sim = 0;
    rep(i,n){
        sim += a[i];
        simple[i+1] = sim%360;//余り
    }
    sort(simple.begin(), simple.end());
    int ans = 0;
    rep(i,n+1){//set使わなくてもこの方が簡潔
        ans = max(ans, simple[i+1]-simple[i]);
    }
    cout << ans << endl;
    return 0;
}