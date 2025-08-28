#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans = 1, length = S.size();

    // int length = S.size()
    //と置くひと手間でコンパイルエラーが防げる！

    for(int i = 0; i < length; i ++){
        if(S.at(i) == '+')
            ans++;
        else if(S.at(i) == '-')
            ans--;
    }

    cout << ans << endl;
}

/*
文字列Sを受け取る
S.at(i)で+ならans++; -ならans--;
をS.size()回繰り返す
ans出力
*/