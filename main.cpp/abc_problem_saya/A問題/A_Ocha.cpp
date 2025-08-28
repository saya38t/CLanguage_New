#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, ans = "NO";
    cin >> S;
    
    int last = S.size();

    if(S.at(last - 1) == 'T')
        ans = "YES";
    
    cout << ans << endl;
}

/*
string Sを受け取る
最後の文字だけ判別したい
last = S.size()　として
S.at(last-1) == 'T'ならans = "YES"として
ans を出力
S.at()はそのままの方がメモリ節約なので上記が最適解
*/