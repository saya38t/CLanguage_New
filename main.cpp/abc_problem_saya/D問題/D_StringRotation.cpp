//coutでやろうとしたけど
//TLEになりましたね

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

void solve(){
    int n; string s;
    cin >> n >> s;
    int l=-1, r=n-1;
    rep(i,n-1){
        if(s[i]>s[i+1]){
            l=i;
            break;
        }
    }
    if(l==-1){
        cout << s << endl;
    }
    else if(l!=-1){
    for(int i=l+1; i<n-1; i++){
        if(s[i]<s[i+1]){
            r=i;
            break;
        }
    }
    for(int i=0; i<n+2; i++){
        int x = i;
        if(i=l) {
            x++;
            continue;
        } else if(i=r) x--;
        cout << s[i] << endl;
    }
    }
}

int main(){
    int t;
    cin >> t;
    rep(i,t) solve();
    return 0;
}