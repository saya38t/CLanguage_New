#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<bool>check(w+1, false);
    //1
    rep(i,n) if(a[i]<w+1) check[a[i]] = true;
    //2
    rep(i,n)rep(j,i) {//rep入れ子
        int aa = a[i] + a[j];
        if(aa<w+1) check[aa] = true;
    }
    //3
    rep(i,n)rep(j,i)rep(k,j){//i<j<kで重複しないよう工夫
        int aaa = a[i] + a[j] + a[k];
        if(aaa<w+1) check[aaa] = true;
    }
    int ans=0;
    rep(i,w+1){
        if(check[i]==false) continue;
        ans ++;
    }
    cout << ans << endl;
    return 0;
}