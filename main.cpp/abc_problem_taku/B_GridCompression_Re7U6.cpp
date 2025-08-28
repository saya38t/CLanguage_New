#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<bool> hflag(H, false);//縦チェック
  vector<bool> wflag(W, false);//横チェック
  vector<vector<char>> ocero(H, vector<char>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++){
      cin >> ocero.at(i).at(j);//一文字入力
      if (ocero.at(i).at(j) == '#') {
        hflag.at(i) = true;//#がある文字の行
        wflag.at(j) = true;
      }
    }
  }

  for (int i = 0; i < H; i++) {
    if (!hflag.at(i)) continue;//その行に.のみ
    for (int j = 0; j < W; j++) {
      if (!wflag.at(j)) continue;//その列に.のみ
      cout << ocero.at(i).at(j);//消えない列と行に存在
    }
    cout << endl;
    //横一列消える時はすでにcontinueで解脱
  }
}
/*
縦一行、横一列、双方に#が一つでもあれば残る
*/