#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    
    int sum = 0;
    rep(i,n) sum += A[i];

    if(sum<=m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
/**/