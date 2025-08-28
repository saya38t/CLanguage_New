#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<vector<int>> cdn(1502, vector<int>(1502));
    rep(i,n){
        int x,y;
        cin >> x >> y;
        cdn[x][y]++;
    }
    for(int i=1; i<1501; i++){
        for(int j=1; j<1500; j++){
            cdn[j+1][i]+=cdn[j][i];
        }
    }
    for(int i=1; i<1501; i++){
        for(int j=1500; j>0; j--){
            cdn[i][j-1]+=cdn[i][j];
        }
    }
    int q;
    cin >> q;
    vector<int> answer(q);
    rep(i,q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans;
        ans = cdn[c][b]+cdn[a-1][d+1]-cdn[c][d+1]-cdn[a-1][b];
        answer[i]=ans;
    }
    rep(i,q){
        cout << answer[i] << endl;
    }
    return 0;
}
//同じ座標に複数点が入る場合も想定する！！
/*
1500*1500の二次元配列
入力された座標を++
累積和とる（横→縦）
Q個入力受け取る
左上(a,d)で右下(c,b)
右下+左上のさらに斜め上-右上の上-左下の左
*/