#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> a (n);
    rep(i,n) cin >> a.at(i);
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a.size() << endl;
    rep(i, a.size()) cout << a.at(i) << ' ';
    return 0;
}






/*解説
小さい順に並べる→sort
重複の省き方＝set(pythonに良い)
sort→unique（stlに入ってるためc++に適してる）
uniqueの使い方
→unique(a.begin(), a.end())で重複省いた配列＋ゴミ
a.erase(unique(a.begin(), a.end()), a.end())ゴミを消せる
∵erase(deq, 1)というのはコンテナdeqから値１をもつ要素を全て削除
  erase(非メンバ関数に近い!?)
  uniqueはイテレータ範囲[a.begin(), a.end())から重複した要素を除く
  []は閉区間、()は開区間なのでa.beginを含みa.endを含まない区間
  戻り値として先頭に集められた重複無し範囲の末尾の次を指すイテレータが返る
  イテレータとは：データ集合の要素に順番にアクセスする仕組み
  beginは先頭要素を指す、endは最後の要素の次の要素を指す
  endはイテレータなのでa.end()はunique(略)のゴミ要素を指す

※atcoderでは区切りについては改行でもスペースでもタブでも
区切られていればok
ただ、改行必要との記載あることもあるので注意。

出力するときに重複省ければok
ちなみに[]は大括弧で[1,2]なら1<=x<=2の集合＝閉区間
　　　　()は小括弧で(1,2)なら1<x<2の集合＝開区間
非メンバ関数はクラス外、main(){}の外で定義される関数のこと
*/