#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> d(n-1);
    rep(i,n-1){
        int D;
        cin >> D;
        d[i] = D;
    }
    for(int i=0; i<n-1; i++){
        cout << d[i] << ' ';
        int ans=d[i];
        for(int j=i+1; j<n-1; j++){
            ans+=d[j];
            cout << ans << ' ';
        }
        cout << endl;
    }
    return 0;
}
/**/