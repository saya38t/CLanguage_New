#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<set<int>> row(h), col(w);
    //row(行)col(列)という２つの配列
    //配列の要素の型がset<int>になっている
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        row[x].insert(y);//insert(i)は要素iの追加
        //row配列x番目のsetにyというキーを代入
        //=x行の配列にyを代入(ゴミがある列番号)
        //(setは昇順にソートしてくれる)
        col[y].insert(x);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int type, z;
        cin >> type >> z;
        z--;
        int ans = 0;
        if(type==1){
            ans = row[z].size();
            //z行のゴミを数える
            for(int j:row[z]) col[j].erase(z);
            //erase(i)で要素iを削除
            //数えたゴミがある列でz行目を削除
            row[z] = set<int>();
            //z行目の配列を空にする
        } else{
            ans = col[z].size();
            for(int j:col[z]) row[j].erase(z);
            col[z] = set<int>();
        }
        cout << ans << '\n';
    }
    return 0;
}
/*
>>解説
ゴミの個数を消して更新する作業をどうするか
ぽ：計算量を減らす→均し計算、償却計算
    クエリのみ管理すれば計算節約
解１：vector<vector>でゴミを配置
　　　　but 難しい、計算量多い
★解２：setを使う(座標が分かってるので)
ハッシュセット、アンオーダーセット


※たくさん出力するときはendlじゃなく'\n'が良
※vectorでもsetでもデータを順番に見ているとき
(forを使っているときに)データごと変えてしまうと
壊れがち！！
→後でまとめて消すしかない
*/