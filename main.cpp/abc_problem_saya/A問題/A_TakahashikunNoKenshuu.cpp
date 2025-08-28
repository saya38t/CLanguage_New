#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    getline(cin,A);
    getline(cin,B);
    if(A.size()>B.size())
        cout << A << endl;
    else
        cout << B << endl;
}
/*
文字が長い方の変数名
string A,Bで受け取る
.size()をa_lengthとb_lengthにそれぞれ代入して比べる
aのが長かったらaを出力
bのが長かったらbを出力

!!!A>>Bとするよりもgetline(cin,)使う方がメモリ節約!!!
!!!a_lenght = A.size()などしてif()条件式に入れるより
　　　　　　　　　　　　　　　　そのままの方がメモリ節約!!!
*/