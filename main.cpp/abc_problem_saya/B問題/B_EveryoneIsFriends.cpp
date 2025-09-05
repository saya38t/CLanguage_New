#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,m;
    cin >> n >> m;
    vector<set<int>>p(n+1);
    rep(i,m){
        int k;
        cin >> k;
        vector<int>x(k);
        rep(j,k) cin >> x[j];
        rep(j,k)rep(l,k){
            p[x[j]].emplace(x[l]);
        }
    }
    for(int i=1; i<n+1; i++){
        if(p[i].size()<n){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/*abc272*/