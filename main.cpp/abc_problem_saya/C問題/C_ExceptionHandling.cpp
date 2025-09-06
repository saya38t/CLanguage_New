#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<int>lef(n+1), ri(n+2);
    rep(i,n){
        lef[i+1]=max(lef[i],A[i]);
        ri[n-i]=max(ri[n-i+1],A[n-i-1]);
    }
    rep(i,n) cout << max(lef[i],ri[i+2]) << endl;
    return 0;
}
/**/