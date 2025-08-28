#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) {
        cin >> a[i] >> b[i];
    }
    int ans =0;
    rep(i, n) {
        if (a[i] < b[i]) {
           ans++;
        }
    }
    cout << ans << endl;
    return 0;
}