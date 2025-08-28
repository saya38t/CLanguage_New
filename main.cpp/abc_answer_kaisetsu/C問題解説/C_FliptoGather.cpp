#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> joheki (n+1);
    rep (i, m) {
        int l, r;
        cin >> l >> r;
        l--;
        joheki.at(l)++;
        joheki.at(r)--;
    }
    rep (i,n) joheki.at(i+1) += joheki.at(i); 
    int ans = *min_element(joheki.begin(), joheki.begin()+n);
    cout << ans << endl;
    return 0;
}

/*解説
全探索しようとするとTLE
計算量を減らしたい

各城壁について何台の砲台で守られているかを計算して最小値をとる
〇各砲台が守っている城壁について＋１する⇒⇒TLE
★区間に＋１をしたい・・・まとめて処理できればよい
                        都度足さない＝後で累積和をとる
                        累積和＝左からある場所までの和
                        001111100=0010000-10の累積和
                        両端に１と‐１を置いた累積和
                        二か所に＋1と‐１を繰り返す→最後に累積和

累積和のやり方・・前の要素に自分の要素を足すのを要素の数だけ繰り返す
min_element(s.begin(), s.end())なら
イテレータ範囲[s.begin(), s.end())つまり配列sの全範囲のうち
最小値を指す最初のイテレータを取得する

◎ポインタ・・・「＊」=値//「＆」=アドレス
　＊⇔＆；
＊は＊の右に書かれた変数名が指しているメモリに記憶されている値を取り出す
例えば*min_element()なら最小値の値そのものを取り出せる
＆は＊と正反対の役割、つまり、＆の右に書かれた変数名が値を保存するアドレスを取得する
※この＆は参照とは異なる、注意！！

※rep使うときはrep(i,n)のrepと()はゼロ距離にしないとエラーになるよ
*/