//消す値を-1で置き換えて出力時に消す
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    rep(i,n) cin >> A[i];
    rep(i,m) cin >> B[i];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[j]==B[i] && A[j]!=-1) {
                A[j]=-1;
                break;
            }
        }
    }
    rep(i,n){
        if(A[i]!=-1) cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}