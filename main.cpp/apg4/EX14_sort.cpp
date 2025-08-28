#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vec(3);
    vec.at(0) = a;
    vec.at(1) = b;
    vec.at(2) = c;
    sort(vec.begin(), vec.end());
    cout << vec.at(2) - vec.at(0) << endl;
}

/*
abc受け取り配列つくる
sirtで小さい順に
最後-最初
3584KB

ちなみにa,b,cを置かず直接配列に代入すると
コード長さは4Byte増えてメモリ3704KB((><;
*/