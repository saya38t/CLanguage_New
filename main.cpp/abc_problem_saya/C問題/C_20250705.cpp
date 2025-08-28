#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    ll q;
    cin >> q;
    vector<ll>c(q);
    vector<ll>x(q);
    for(ll i=0;i<q ;i++){
        int num;
        cin >> num;
        if(num==1){
            cin >> c[i] >> x[i];
        }
        else if(num==2){
            ll k;
            cin >> k;
            ll kake = k;
            ll ans=0;
            for(ll j=0; j<q; j++){
                if(kake<=c[j]){
                    ans+=kake*x[j];
                    c[j] -= kake;
                    cout << ans << endl;
                    break;
                }
                else if(kake>c[j]){
                    ans+= c[j] * x[j];
                    kake -= c[j];
                    c[j] = 0;
                }
            }
        }
    }
    return 0;
}
/**/