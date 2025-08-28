#include <bits/stdc++.h>
using namespace std;
//続きから！EX20exでやったこと思い出しつつ。
/*
組織数N、0～N-1番、報告書１枚ずつ作成
0番トップ
子の報告書全てと自分の報告書をまとめて親に渡す
各組織について、親に提出する報告書の枚数を答える
トップも。
*/
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
  int submission_number = 0;
  //ベースケース
  //子組織がいないときreturn
  if(children.at(x).size() == 0) {
    return 1;//return の後は何を返してもいいけど計算させない方が良さげ
  }
  //再帰ステップ
  //子組織のsubmission_numberに合計していく
  for(int c:children.at(x)){
    submission_number += count_report_num(children, c);
  }
  //x番の組織が親組織に提出する枚数を返す
  submission_number++;
  return submission_number;
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

  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
  /*
  親{子、子、子・・・}
  */

  // 各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}