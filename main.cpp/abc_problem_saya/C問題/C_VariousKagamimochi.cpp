#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    vector<int>dbA(n);
    rep(i,n)cin >> A[i];
    rep(i,n) dbA[i]=A[i]*2;
    ll ans = 0;
    rep(i,n){
        int j = lower_bound(A.begin(),A.end(),dbA[i])-A.begin();
        ans += (ll)n-j;
    }
    cout << ans << endl;
    return 0;
}
/**/