#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    //文字列の初期化
    string str1 = "Hello";
    string str2 = "World";

    //文字列の連結
    string str3 = str1 + ", " + str2 + "!"; // "Hello, World!"


    //文字列の比較
    if (str1 == "Hello") {
        cout << "str1 is Hello" << endl;
    }

    //文字列の出力
    cout << str3 << endl; // "Hello, World!"

    //文字列の長さ
    cout << "Length of str3: " << str3.length() << endl; // 13

    //文字列の末尾取得
    char last = str3.back();

    //文字列の末尾を消す
    str3.pop_back(); // "Hello, World"

    //末尾に足す（文字）
    str3.push_back('!');
    //末尾に足す(文字列)
    str3.append("さや");

    //末尾の文字を取得
    char lastChar = str3.back(); // '!'

    //部分文字列
    int a=1, b=2;
    str3.substr(a,b);//文字列str3のa文字目~b文字目だけ取り出す

    return 0;
}