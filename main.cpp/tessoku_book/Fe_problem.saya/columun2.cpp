#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)

int main(){
    int n, s;
    cin >> n >> s;
    vector<int>a(n);
    rep(i,n) cin >> a.at(i);
    bool ans = false;
    for(int i=0; i<(1<<n); i++){
        int sum=0;
        rep(j,n){
            if((i/(1<<j))%2==1) sum+=a.at(j);
        }
        if(sum==s){
            ans=true;
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
    
}
/*
カード選ぶとき１、選ばないとき０
0~2^nの2進数分ある
2^n==1<<n
aをvectorで配列
10進数iを0~2^nまで
iを二進数に直す
毎回(i/2)%2で１なら足す→合計
ｓになるか判定
*/