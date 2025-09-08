#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    rep(i,n) cin >>a[i];
    map<int,vector<int>>mp;//(値：要素数の配列)
    rep(i,n){
        mp[a[i]].emplace_back(i+1);
    }
    rep(i,q){
        int x,k;
        cin >> x >> k;
        vector<int>& p = mp[x];//参照する
        if(p.size()<k){
            cout << -1 << endl;
            continue;
        }
        cout << p[k-1] << endl;
    }
    return 0;
}
/**/