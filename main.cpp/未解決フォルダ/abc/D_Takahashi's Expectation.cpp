#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>P(n);
    vector<int>A(n);
    vector<int>B(n);
    rep(i,n) {
        cin >> P[i] >> A[i] >> B[i];
    }
    int q;
    cin >> q;
    vector<int> X(q);
    rep(i,q) cin >> X[i];
}
/**/