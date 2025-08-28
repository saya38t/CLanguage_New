//3552KB

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0; i<N; i++){
        cin >> vec.at(i);
    }
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int a=0, b=0;
    for(int i=0; i<N; i++){
        if(i%2==0) a+=vec.at(i);
        else b+=vec.at(i);
    }
    cout << a-b << endl;
}
/*
aをN回受け取り配列
配列を小さい順に並べる
大きい順に並べなおす
A, Bに交互に足してく
A-Bを出力
*/