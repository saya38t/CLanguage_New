#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> ans(H);
    for(int i = 0; i<H; i++){
        string a;
        cin >> a;
        ans.at(i) = "#" + a + "#";
    }
    string b;
    for(int j =0; j<W+2; j++){
        b += '#';
    }
    cout << b << endl;
    for(int i=0; i<H; i++){
        cout << ans.at(i) << endl;
    }
    cout << b << endl;
}


/*
文字列一行受け取る
前後に#をつけてans配列に代入
要素数Wの#の配列(string)を前後に付けてansを出力
*/
/*
あらかじめ#ではさみなおしてans.at(i)に代入し出力した方が
メモリ節約
*/