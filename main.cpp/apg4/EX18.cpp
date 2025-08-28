//3648KB

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>>R(N,vector<char>(N,'-'));
  for(int i=0; i<M; i++){
    A.at(i)--;
    B.at(i)--;
    R.at(A.at(i)).at(B.at(i))='o';
    R.at(B.at(i)).at(A.at(i))='x';
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        cout << R.at(i).at(j);
        if(j!=N-1) cout << " ";
    }
    cout << endl;
  }
}
/*
forでiを変えながら
R.at(A.at(i)-1).at(B.at(i)-1)にoを代入
R.at(B.at(i)-1).at(A.at(i)-1)にxを代入
する前にA.at(i)--; B.at(i)--とし負担軽減
*/