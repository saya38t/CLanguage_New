//未解決課題；insertが使えない

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int num; 
        string str;
        cin >> num >> str;
        int inst_num=num-1;
        char inst_str;
        rep(i,num){
            if(str[i]>str[i+1]){
                inst_str=str[i];
                str[i] = '?';
                inst_num=i;
                break;
            }
        }
        constexpr str.insert(inst_num, inst_str);
        rep(i, num+1){
            if(str[i] == '?') continue;
            cout << str[i];
        }
        cout << '/n';
    }
}

/*
辞書順最小＝＝小さい文字が前に並んでてほしい
右隣と比較して大きい文字見つけ次第Lを置いて
順番に見ながら比較して小さくなる文字の番号を記憶して
あとで出力するときに書き換える
*/
