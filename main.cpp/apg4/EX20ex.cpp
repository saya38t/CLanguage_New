//例題
#include <bits/stdc++.h>
using namespace std;

// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
  int ans = 0;
  //ベースケース（子の数が０）
  if(children.at(x).size()==0) {
    return 0;
  }
  //再帰ステップ
  //xの子yを呼び出す
  for(int y:children.at(x)){
    int count = complete_time(children, y)+1;
    //処理
    //子→親のときに数えるcount
    //countと比較してansを最大値に保つ
    ans = max(ans, count);
  }
  return ans;//受け取った時刻の最大値
}
// これ以降の行は変更しなくてよい

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る(理解しなくてもよい)
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧  // N×0の二次元配列
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
  /*
  親{子、子、子・・・}
  親{子、子・・・}
  ・・・
  */

  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}
/*
組織数N、0~N-1の番号
子の報告書そろえて親に送る
報告書１回送る＝１min
伝達開始後何分でトップにそろうか
i番の組織の親がpi番の組織
0番の組織はトップ
*/