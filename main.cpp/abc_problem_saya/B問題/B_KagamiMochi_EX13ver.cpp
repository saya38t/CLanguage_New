#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(101);
    for(int i=0; i<N; i++){
        int d;
        cin >> d;
        vec.at(d)++;
    }
    int count =0;
    for(int i=0; i<101; i++){
        if(vec.at(i)!=0) count++;
    }
    cout << count << endl;
}

/*
101個の配列つくる
dを受け取って要素数=dの位置に入れ、dを値ごとにそれぞれ数える
上記配列のうち数値が０でない要素を数える
文字列の長さを答えとして出力
*/