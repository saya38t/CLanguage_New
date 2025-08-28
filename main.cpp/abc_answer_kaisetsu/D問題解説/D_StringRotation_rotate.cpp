#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

void solve(){
    int n; string s;
    cin >> n >> s;
    int l=-1,r=n-1;
    rep(i,n-1){
        if(s[i]>s[i+1]){
            l=i;
            break;
        }
    }
    if(l!=-1){
        for(int i=l+1; i<n-1; i++){
            if(s[l]<s[i+1]){
                r=i;
                break;
            }
        }
        rotate(s.begin()+l, s.begin()+l+1, s.begin()+r+1);
    }
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    rep(i,t) solve();
    return 0; 
}



/*解説
辞書順最小＝＝先頭をできるだけ小さい文字にする
（辞書でできるだけ前の方に来るようにする）

＊＊考察（だいたいかんがえた）
左シフトで何が起こるのか＝１つ次の文字が前に来る
次の場所より小さいところを見つけたらそこをＬにする＊＊

何も操作しない場合を場合分け


返り値がない関数void(){}を先に定義して共通の動作を記述
→→→main(){}内で呼び出す

void 関数名(型　引数名){
    動作;
}
int main(){…}
呼び出すときは　関数名(引数);
引数ないときは 関数名();

返り値あるときは
返り値の型　関数名(引数１の型　引数１の名, 引数２の型　引数２の名,…){
    処理;
    return 返り値;
}
呼び出しは同様


解法１：挿入の方法＝＝rotate()を使う
    string str = "rotate";
    rotate(str.begin(), str.begin()+2, str.end());
    cout << str << endl;
    出力：tatero

<<rotate>>
配列やコンテナの一部を回転させる。指定範囲の要素を左右どちらかにシフト
はみ出た要素を反対側に回転させる。
◎基本構文
std::rotate(ForwardIterator first, ForwardIterator middle, ForwardIterator last);
first＝＝回転させる要素の最初の要素を指すイテレータ
middle＝＝回転させたい範囲内での新しい要素の次を指すイテレータ
last＝＝回転させる範囲の最後の要素の次を指すイテレータ
[first,last)の要素をmiddleの要素が先頭、middle-1の要素が末尾になるよう回転
配列の内容を一定の位置で分割し入れ替える。
★vectorと相性良い
※イテレータなのでbegin()とかend()とか使って+xとか-x1とかして調整しないとダメっぽい
（たとえば、str[x]使って指定するとエラーになる）
※範囲外のイテレータを渡すとエラーに。コンテナのサイズ変更時は特に注意！
　指定範囲すべての要素を移動するためデータ量に比例して時間かかる
　→ポインタや参照を使用し不必要なコピーを避ける
　→データセットが非常に大きければほかのアルゴリズムを検討しよう

*/