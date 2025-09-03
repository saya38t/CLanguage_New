#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    string S,T;
    cin >> S >> T;
    if(S==T) {
        cout << 0 << endl;
        return 0;
    }
    vector<int>plus;
    vector<int>minus;
    vector<string>ans;
    rep(i,S.size()){
        if(S[i]!=T[i]) {
            if(T[i]-S[i]>0) plus.emplace_back(i);
            else minus.emplace_back(i);
        }
    }
    sort(plus.rbegin(),plus.rend());
    sort(minus.begin(),minus.end());
    rep(i,minus.size()){
        int j = minus[i];
        S[j]=T[j];
        ans.emplace_back(S);
    }
    rep(i,plus.size()){
        int j = plus[i];
        S[j]=T[j];
        ans.emplace_back(S);
    }
    cout << ans.size() << endl;
    rep(i,ans.size()) cout << ans[i] << '\n';
    return 0;
}
/*辞書順最小＝＝前の文字が小さい
->>差がマイナスとプラスに分けて、前から変えるか後ろから変えるか*/