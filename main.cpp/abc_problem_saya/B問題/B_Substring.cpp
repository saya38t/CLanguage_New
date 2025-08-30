#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    string S,T;
    cin >> S >> T;
    int ls = S.size(), lt = T.size();
    int ans = lt;
    rep(i,ls-lt+1){
        int cnt = 0;
        string cs = S.substr(i,lt);
        rep(j,lt){
            if(cs[j]!=T[j]) cnt++;
        }
        ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}
/**/