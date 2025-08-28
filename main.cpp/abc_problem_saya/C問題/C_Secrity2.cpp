#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0;
    while(str != ""){
        while(str.back() != '0'){
            for(int i=0; i<str.size(); i++){
                if(str[i]==0) str[i]=9;
                else str[i]--;
            }
            count++;
        }
            str.pop_back();
            count ++;
    }
    cout << count << endl;
}
    
//少なくともsの桁数分は必要
//隣り合う数の差の分押す（）
//逆の場合
//A：末尾０なら消す
//B：１減らす(数の回数)
/*
画面に表示される文字列t
tは最初空文字列
ボタンA＝tの末尾に0追加
ボタンB＝tの数字が全て置き換わる
　　　　　　0~8:+1
           9:0
与えられた文字列Sにtを一致させるには
最小ボタン何回押すか
*/