#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = -1;
    int cnt = 0;
    rep(i,n){
        if(s[i]=='o') cnt ++;//切り替え単純
        else if(cnt>0) {//ansの初期値-1なのでcnt==0は絶対除外
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    if(cnt>0 && n>cnt) ans = max(ans,cnt);
    cout << ans << endl;
    return 0;
}