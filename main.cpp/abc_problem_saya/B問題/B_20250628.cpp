#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    string t;
    cin >> s >> t;
    int n = s.size();
    string check = "";

    rep(i,n){
        if(i!=0 && isupper(s[i])){
            check += s[i-1];
        }
    }
    int m = t.size();
    int l = check.size();
    vector<int> yesno(l);

    for(int j=0; j<l; j++){
        for(int i=0; i<m; i++){
            if(t[i] == check[j]){
                yesno[j] = 1;
            }
        }
    }
    int ans =0;
    rep(i,l){
      ans+=yesno[i];
    }
    if(ans==l){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}