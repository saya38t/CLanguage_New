#include <bits/stdc++.h>
using namespace std;

int main(){
    char C;
    cin >> C;
    string Boin = "aeiou", ans = "consonant";

    for(int i = 0; i < 5;i++){
        char check = Boin.at(i);
        if(check == C){
            ans = "vowel";
            break;
        }
    }

    cout << ans << endl;

}

/*
char Cを受け取る
string Boin = "aeiou", ans = "consonant" を用意
forで5回、Boin.at(i) == Cを確認する
trueならans = "vowel" でbreak
ansを出力
*/