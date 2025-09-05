//dp(動的計画法)
//数を選んで総和し条件満たすもの選びたいが全探索だとTLEのとき
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>>dp(n+1, vector<int>(k+1));//表(個数、和)
    int mod = 998244353;
    dp[0][0]=1;
    for(int x=1; x<n+1; x++){
        rep(y,k+1){
            int now = 0;
            for(int j= 1; j<m+1; j++){
                if(y-j>-1){
                    now += dp[x-1][y-j];
                    now %= mod;
                }
                else if(y-j<0) break;
            }
            dp[x][y]=now;
        }
    }
    int ans = 0;
    rep(i,k+1) {
        ans+=dp[n][i];
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}
/**/