#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll>A(n);
    vector<ll>B(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll checkA=0, checkB=0, a=0, b=0;//提出環境では初期化必須
    for(ll i=n-1; i>-1; i--){
        checkA += A[i];
        a++;
        if(checkA>x) break;
    }
    for(ll i=n-1; i>-1; i--){
        checkB += B[i];
        b++;
        if(checkB>y) break;
    }
    if(a<=b){
        cout << a << endl;
        return 0;
    }
    else cout << b << endl;
    return 0;
}