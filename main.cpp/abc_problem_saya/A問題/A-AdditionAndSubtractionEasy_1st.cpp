#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, ans = 0;
    string op;
    cin >> A >> op >> B;
    if(op=="+")
        ans = A+B;
    else if(op=="-")
        ans = A-B;
    cout << ans << endl;
}
/*
intでA, B stringでopを受け取る
if op == "+"でA+B出力
else if op == "-"でA-B出力
*/