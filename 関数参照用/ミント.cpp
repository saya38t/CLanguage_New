//aclはいったん保留
#include <bits/stdc++.h>
#include <atcoder/all>//入れる
using namespace std;
using namespace atcoder;
#define rep(i,n) for(int i=0; i<(n); ++i)
using mint = modint;//入れる
using ll = long long;

int main(){
    //mintにしたい型をmintにする
    //mintはmint型にした値は毎回modを取ってくれる
    int n,k;
    cin >> n >> k;
    vector<mint>A(max(n+1,k));//配列も！
    vector<mint>sum(A.size());

    //modを取りたい値を定義
    mint:: set_mod(1e9);
    for(int i=k;i<n+1;i++){
        A[i]=sum[i]-sum[i-k];//マイナス対策してくれる
        sum[i+1]=sum[i]+A[i];//常にmodなので桁数気にしなくていい
    }
    cout << A[n].val() << endl;//.val()をつけないとREなるので注意！！
    return 0;
}
/**/