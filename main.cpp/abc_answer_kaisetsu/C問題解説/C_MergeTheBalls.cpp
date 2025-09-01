#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>A(200000);
    int l=0;
    rep(i,n){
        cin >> A[l];
        l++;
        while(l>1){
            if(A[l-1]==A[l-2]) {
                A[l-2]++;
                l--;
            }
            else break;
        }
    }
    cout << l << endl;
    return 0;
}
/**/