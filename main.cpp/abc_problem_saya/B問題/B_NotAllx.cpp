#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> b(M);
    for(int i=0; i<N; i++){
        int A;
        cin >> A;
        if(A<M+1) b.at(A-1)++;
    }
    sort(b.begin(), b.end());
    cout << b.at(0) << endl;
}

/*
要素数Mの配列ｂをつくる
AをＮ回受け取る
配列ｂの要素数と値が等しいAの要素の数をそれぞれ数える
配列bを小さい順にsort
大きい順に並べなおす
b.at(0)を出力
*/