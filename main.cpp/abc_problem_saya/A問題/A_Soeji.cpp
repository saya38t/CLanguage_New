#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i;
    cin >> s >> i;
    cout << s.at(i-1) << endl;
}

/*
string sを受け取る
int iを受け取る
s[i-1]ないしs.at(i-1)を出力
！！！s.at(i-1)の方がメモリ節約！！！
*/