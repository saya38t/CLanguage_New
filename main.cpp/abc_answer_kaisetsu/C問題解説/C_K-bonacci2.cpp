//累積和
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for(int i=0; i<(n); ++i)
using mint = modint;
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,k;
    cin >> n >> k;
    vector<mint>A(max(n+1,k));
    vector<mint>sum(A.size());
    rep(i,k) A[i] = 1;
    rep(i,k) sum[i+1]=sum[i]+A[i];
    mint:: set_mod(1e9);//mint定義
    for(int i=k;i<n+1;i++){
        A[i]=sum[i]-sum[i-k];
        sum[i+1]=sum[i]+A[i];
    }
    cout << A[n].val() << endl;
    return 0;
}
/**/