#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int>r(n);
    vector<int>c(n);
    rep(i,n) cin >> r[i] >> c[i];
    sort(r.begin(), r.end());
    sort(c.begin(), c.end());
    int dstR = r.back() - r[0];
    int dstC = c.back() - c[0];
    int cnt = max(dstR,dstC);
    if(cnt%2==1) cnt = cnt/2 +1;
    else cnt /= 2;
    cout << cnt << endl;
    return 0;
}