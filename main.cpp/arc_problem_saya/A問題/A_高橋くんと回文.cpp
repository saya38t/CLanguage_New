#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int l = s.size();
    rep(i,s.size()){
        l--;
        if(s[i]=='*' || s[l]=='*') continue;
        else if(s[i]!=s[l]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}