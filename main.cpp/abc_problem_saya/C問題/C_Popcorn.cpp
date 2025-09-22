#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n,m;
    cin >> n >> m;
    vector<string>S(n);
    rep(i,n) cin >> S[i];
    int ans = 10;
    for(int bit=0; bit<(1<<n) ;++bit){//bit全探索(ここで選び方決める)
        vector<bool>bs(m);
        int sum=0;
        int cnt=0;
        for(int i=0; i<n; ++i){//どれを選ぶか(整数型に復元)
            if(bit & (1<<i)){
                rep(j,m)if(S[i][j]=='o') bs[j]=true;
                cnt++;
            }
        }
        rep(k,m)if(bs[k])sum++;
        if(sum==m)ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}