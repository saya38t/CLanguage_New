#include <bits/stdc++.h>
using namespace std;

int main(){
    bool is_valid_move(vector<vector<string>> &atras, vector<vector<bool>> &checked, int x, int y){
        //移動先がない
        if(x <= -1  || x >= 10 || y <= -1 || y >= 10){
            return false;
        }
        //移動先が×マス
        if(atras.at(x).at(y)=='x')  return false;
        //すでに調べたマス
        if(checked.at(x).at(y)) return false;

        return true;
    }
    

    //①すべてのマスが繋がっていることを確認
    //＝ある〇のマスから上下左右に動かせば
    //全ての〇のマスをたどれる
    //＝上下左右に〇があるかcheck→動かす
    //②元々〇のマスの上下左右の×を一つずつ〇に
    //して試す
}
/*
10*10の地図
〇が島、×が海
※つながる＝＝上下左右どれかで〇同士
×を一つだけ〇にすれば全て〇がつながる→YES
無理→NO
*/