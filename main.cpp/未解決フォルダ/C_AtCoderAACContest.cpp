#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    ll t;
    cin >> t;
    rep(i,t){
        ll ans = 0;
        ll a,b, c;
        cin >> a >> b >> c;
        ll m = min(min(a,b),c);
        ans += m;
        a-=m;
        b-=m;
        c-=m;
        if(b==0 && a>0 && c>0){
            ll n =0;
            if(a>=c) {
                n= (a+1)/2;
                ans += min(n,c);
            }
            else if(a<=c){
                n= (c+1)/2;
                ans += min(n,a);
            }
            cout << ans << '\n';
        }
        else cout << ans << '\n';
    }
    return 0;
}
/**/