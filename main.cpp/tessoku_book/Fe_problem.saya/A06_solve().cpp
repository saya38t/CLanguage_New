/*関数*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int solve(vector<int> &a, int l, int r){
    l--; r--;
    if(l==0) return a.at(r);
    return a.at(r)-a.at(l-1);
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    int sum=0;
    rep(i,n){
        int A;
        cin >> A;
        sum+=A;
        a.at(i)=sum;
    }
    rep(i,q) {
        int l, r;
        cin >> l >> r;
        cout << solve(a,l,r) << endl;
    }
}