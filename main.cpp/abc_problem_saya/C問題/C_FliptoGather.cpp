#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>>check(n);
    for(int i=0 ;i<m; i++){
        int l, r;
        cin >> l >> r;
        for(int j=l-1; j<r; j++){
            check[j].insert(i);
        }
    }
    set<int> ans;
    for(int i=0; i<n;i++){
        int s = check[i].size();
        ans.insert(s);
    }
    auto minIte= ans.begin();
    cout << *minIte << endl;
}
/*
1からNまで番号ついたｎ個の城壁
ｍ個の砲台
砲台iはＬi以上Ri以下の番号の城壁を守る
ある砲台を破壊するとその砲台が守ってた城壁が無防備に
無防備な城壁が存在する状態にするには最小で何個砲台を破壊する必要？

*/
/*
城壁に注目したい
LiからRiまでの配列を用意して初期値１入れる
重なる範囲の配列にiを入れる
配列のサイズが一番小さい城壁のサイズを数えて出力
*/