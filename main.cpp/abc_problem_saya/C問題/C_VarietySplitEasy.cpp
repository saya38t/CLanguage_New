#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<int>l(n);
    vector<int>r(n);
    set<int>stl;
    set<int>str;
    //l
    rep(i,n){
        stl.emplace(A[i]);
        l[i] = stl.size();
    }
    //r
    for(int i=n-1; i>-1; i--){
        str.emplace(A[i]);
        r[i] = str.size();
    }
    vector<int>lr(n-1);
    rep(i,n-1) lr[i] = l[i] + r[i+1];
    sort(lr.begin(), lr.end());
    cout << lr.back() << endl;
    return 0;
}