#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> count(N);
    for(int i =0; i<M; i++){
        int a,b;
        cin >> a >> b;
        count.at(a-1)++;
        count.at(b-1)++;
    }
    for(int j = 0; j<N; j++){
        cout << count.at(j) << endl;
    }
}

/*
登場回数＝伸びている道路の本数
登場回数をカウントして出力したい
配列要素数をNとして
入力をint aで受取り配列.at(a-1) ++;
配列要素を順に出力

解説とほぼ一緒！素晴らしい！！
*/