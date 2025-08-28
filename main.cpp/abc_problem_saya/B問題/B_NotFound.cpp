#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    string S;
    cin >> S;
    vector<int>cnt(26);//アルファベットは26文字!!
    int s=S.size();
    rep(i,s){
        char a = 'a';
        rep(j,26){
            if(S[i]==a) cnt[j]++;
            a++;
        }
    }
    string ans = "None";
    rep(i,26){
        if(cnt[i]==0){
            ans = 'a'+i;//アルファべ計算！
            break;
        }
    }
    cout << ans << endl;
    return 0;
}