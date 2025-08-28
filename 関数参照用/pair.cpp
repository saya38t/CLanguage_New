#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    // pairの使い方

    // 初期化
    pair<int, int> p1 = {1, 2};
    pair<int, int> p2(3, 4);

    // アクセス
    cout << "p1: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;

    // sortを使ったpairのソート
    vector<pair<int, int>> vec = {{3, 2}, {1, 4}, {1, 6},{5, 0}};
    sort(vec.begin(), vec.end());
    rep(i, vec.size()) {
        cout << "vec[" << i << "]: (" << vec[i].first << ", " << vec[i].second << ")" << endl;
    }// 出力: vecはfirstでソートされる
    // もしfirstが同じならsecondでソートされる
    // 出力例:
    // vec[0]: (1, 4)
    // vec[1]: (1, 6)
    // vec[2]: (3, 2)
    // vec[3]: (5, 0)

    return 0;
}