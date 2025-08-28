#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    string t, u;
    cin >> t >> u;
    int check = t.length() - u.length() + 1;
    bool ans = true;
    for(int i = 0; i < check; ++i) {
        for(int j=0; j<u.length(); ++j) {
            if(t[i+j] != u[j] && t[i+j] != '?') {
                ans = false;
                break;
            }
            else if(t[i+j] == u[j] || t[i+j] == '?'){
                ans = true;
            }
        }
        if(ans){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}