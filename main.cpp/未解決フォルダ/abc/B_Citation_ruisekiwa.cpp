#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    set<int>num;
    vector<int>a(n);
    rep(i,n) {
        int ai;
        cin >> ai;
        num.insert(ai);
        a.at(i) = ai;
    }
    int range = num.size();
    vector<vector<int>>x(range);
    for(int j=0;j<n;j++){
        rep(i, range){
            if(a.at(j)) ;
        }
    }
}

/*
累積和で求めるやり方。
各数字にカウントを入れる配列を作って累積和
a受け取る
setで配列作る
aの配列も作る
set配列に対応させてvectorにカウント
累積和
最大値のx

*/