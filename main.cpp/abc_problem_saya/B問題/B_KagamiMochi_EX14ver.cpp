//3668KB
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
    int count=0;
    for(int i=0; i<N; i++){
        if(i>0 && vec.at(i)==vec.at(i-1)) continue;
        count++;
    }
    cout << count << endl;
}
/*
dをN回受け取って配列
小さい順に並べる
N回取り出してcount※前の要素と同じ値の要素はcontinue
countを出力
*/