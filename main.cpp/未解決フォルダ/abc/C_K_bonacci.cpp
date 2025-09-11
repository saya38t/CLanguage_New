#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll>A(k,1);
    A.emplace_back(k);
    rep(i,n-k-1) A[k+i+1] = 0;
    const int mod = 1e9;//constは不変の数(代入不可)を定義できる
    rep(i,n-k){
    A[k+i+1] = (ll)((A[k+i]*2)%mod-A[i]+mod)%mod;//modをとるときはマイナスを対策
    //桁数が大きくなりそうなときはその都度わる
    }
    cout << (ll)A[n]%mod << endl;
    return 0;
}
/*24AC, 13RE*/