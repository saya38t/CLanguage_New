#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>A(n);
    vector<int>B(m);
    rep(i,n) cin >> A[i];
    rep(i,m) cin >> B[i];
    for(int i=0; i<m; i++){
        int n=A.size();
        for(int j=0; j<n;j++){
            if(B[i]==A[j]) {
                A.erase(A.begin()+j);
                break;
            }
        }
    }
    rep(i,A.size()) cout << A[i] << ' ';
    return 0;
}
/**/