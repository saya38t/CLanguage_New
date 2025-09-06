//累積和
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,k;
    cin >> n >> k;
    vector<ll>imos(n+1);
    ll sum = 0;
    rep(i,n){
        int a;
        cin >> a;
        sum+=(ll)a;
        imos[i+1]=sum;
    }
    ll ans = 0;
    for(int i=k ;i<n+1;i++){
        ans+=(ll)(imos[i]-imos[i-k]);
    }
    cout << ans << endl;
    return 0;
}
/**/