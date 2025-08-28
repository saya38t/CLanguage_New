#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string>S(n);
    rep(i,n) cin >> S[i];

    vector<int>score(n);
    vector<int>win(m);
    rep(i,m){
        vector<int>cnt(2);
        rep(j,n){
            if(S[j][i]=='0')cnt[0] ++;
            else cnt [1]++;
        }
        if(cnt[0]==0 || cnt[1]==0) win[i]=2;
        else if(cnt[0] < cnt[1]) win[i]=0;
        else win[i]=1;
    }
    int mx=0;
    rep(i,n){
        rep(j,m){
        if(win[j]==2 || S[i][j]-'0'==win[j]) score[i]++;
        }
        mx = max(mx, score[i]);
    }
    rep(i,n){
        if(score[i]==mx) cout << i+1 << ' ';
    }
    return 0;
}
/**/