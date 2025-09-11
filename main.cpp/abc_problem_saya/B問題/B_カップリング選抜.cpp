//二分探索
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,s;
    cin >> n >> s;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    ll ans = 0;
    sort(A.begin(),A.end());
    rep(i,n){
        int x = s-A[i];
        int j = lower_bound(A.begin(),A.end(),x)-A.begin();
        int k = upper_bound(A.begin(),A.end(),x)-A.begin();
        if(i!=j && A[j]==x && A[k-1]==x) ans += k-j;
    }
    cout << ans/2 << endl;
    return 0;
}

/**/