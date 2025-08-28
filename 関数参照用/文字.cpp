#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    // charの計算
    char c = '1';
    int num = c - '0'; // '1'を整数に変換

    // 文字列の初期化
    string str1 = "Hello";
    string str2 = "World";

    //文字の末尾要素取得
    char last = str1.back();

    // 文字列の連結
    string str3 = str1 + ", " + str2 + "!"; // "Hello, World!"

   //文字の長さの最大値
   int m = 0;
   m = max(m, (int)str3.size());//(int)が大事そう,
   //lengthじゃなくsize()

    // 文字列の出力
    cout << str3 << endl; // "Hello, World!"

    // 文字列の長さ
    cout << "Length of str3: " << str3.length() << endl; // 13

    return 0;
}