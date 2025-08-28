#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    string s;
    cin >> s;
    string t=s;
    reverse(t.begin(), t.end());//reverseで順序まるごと反転
    rep(i,s.size()){
        if(s[i]=='*' || t[i]=='*') continue;
        else if(s[i] != t[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}