#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int>ans(n);
    rep(i,n-1){//コーナーに注意
        int A;
        cin >> A;
        A--;
        ans[A]++;
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;
}
/**/