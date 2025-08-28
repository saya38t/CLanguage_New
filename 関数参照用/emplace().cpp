#include <bits/stdc++.h>
using namespace std;
int main(){
    //emplace
    /*insertやpush_backとのチガイ
    :インスタンスを作る->コンテナに渡す(insertやpush_backは逆)
    ->>コピーやムーブが不要==パフォ良好！！*/
    vector<int> test;
    //追加
    test.emplace(test.begin(), 3);
    //末尾に追加
    test.emplace_back(3);
    /*順序付きコンテナ(vector,deque)に最適
        setでは使えない*/
}