#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0 ;i<(n); ++i)
int main(){
    //set
    //計算量 O(logN)
    //＊要素がキーになる
    //＊重複消して配列>>重複あるか判定したいとき便利
    //(↑全て配列した後にst.size()で要素数小さければ重複あり)
    int i = 2, j=3;
    //宣言
    set<int> st={1,4,5,6,7};

    //要素の追加
    st.insert(i);
    st.emplace(j);

    //要素の削除
    st.erase(i);//erase(value)の定義による*

    //要素数
    cout << st.size() << endl;

    //要素出力
    auto it = st.begin();//先頭イテレータ
    rep(i, st.size()){
        cout << *it << '\n';
        advance(it,1);//イテレータを１つ進める
    }
    //最小・最大取得
    // 先頭及び末尾-1のイテレータを取得
    auto minIte = st.begin();
    auto maxIte = --st.end();

    // 表示
    cout << "先頭(最小)の要素は" << *minIte << endl;
    cout << "最後(最大)の要素は" << *maxIte << endl;

    //座標の重複チェック>>pairとハイブリッド
    set<pair<int,int>>cdn;

    //要素の存在を確かめる( count, find)
    //count
        if(st.count(5)) cout << "CountYes" << endl;
        /*st.count(n)はstに含まれるnの個数を返す
        ->>stにn存在すると非ゼロ==true
        (0==false/0!=trueとなるのがbool型なのだ)*/
    //find
        if(st.find(5) != st.end()) cout << "FindYes" << endl;
        /*戻り値：検索した要素のイテレータ
          見つからない->>st.end()が返る
          st.find(first, last, 5)で
          イテレータ範囲[first,last)から5を探す
          見つからない->>lastが返る
        */
}
/*
erase(): std::setではerase()の定義が複数
    >>erase(iterator): イテレータが指す要素を削除
    　erase(value): 指定した値と一致する要素を削除

*/