#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n = 3;
    vector<int>l(3);
    rep(i,n) cin >> l[i];
    if(l[1]==l[2]) {
        cout << l[0] << endl;
        return 0;
    }
    if(l[0]==l[2]) {
        cout << l[1] << endl;
        return 0;
    }
    if(l[1]==l[0]) {
        cout << l[2] << endl;
        return 0;
    }
    return 0;
}