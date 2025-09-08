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
    vector<int>A(max(n+1,k));
    vector<int>sum(A.size());
    rep(i,k) A[i] = 1;
    rep(i,k) sum[i+1]=sum[i]+A[i];
    const int mod=1e9;//constは不変の数(代入不可)を定義できる
    for(int i=k;i<n+1;i++){
        A[i]=(sum[i]-sum[i-k]+mod)%mod;//modをとるときはマイナスを対策
        sum[i+1]=(sum[i]+A[i])%mod;//桁数が大きくなりそうなときはその都度わる
    }
    cout << A[n]%mod << endl;
    return 0;
}
/**/