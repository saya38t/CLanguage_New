//二分探索(lower_bound)
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>A(n);
    vector<int>x(q);
    rep(i,n)cin >> A[i];
    rep(i,q)cin >> x[i];

    sort(A.begin(),A.end());

    vector<int>ans(q);

    rep(i,q){//二分探索
        int j = lower_bound(A.begin(), A.end(), x[i])-A.begin();
        //イテレータ - A.begin() でイテレータが指す要素の番号を数値で返す
        //lower_bound(first, last, 値)でイテレータ[first, last)を二分探索
        //値以上の要素のうち一番左側のイテレータを返す
        ans[i]=n-j;
    }
    rep(i,q) cout << ans[i] << endl;
    return 0;
}