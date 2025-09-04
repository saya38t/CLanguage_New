#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n, m;
    cin >> n >> m;
    vector<int>A(m);
    vector<int>B(m);
    rep(i,m) cin >> A[i] >> B[i];//
    vector<set<int>>city(n);
    rep(i,m){
        A[i]--; B[i]--;
        city[A[i]].insert(B[i]);
        city[B[i]].insert(A[i]);
    }
    rep(i,n){
        cout << city[i].size() << ' ';
        for(int j:city[i]) cout << j+1 << ' ';
        cout << endl;
    }
    return 0;
}
/**/