#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, sum=0;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i< N; i++){
    cin >> A.at(i);
    sum += A.at(i);
  }
  for(int j = 0; j<N; j++){
    int ans = A.at(j)-(sum/N);
    if(ans<0) ans*=-1;
    cout << ans << endl;
  }
}
/*
N受け取る
Aの配列つくる
vector<int> A;
配列Aから順に取り出して計算し出力

※abs(),fabs()を使う方法
absは整数型intの引数につき絶対値をintで返す
fabsは浮動小数点型floatの引数につき絶対値をfloatで返す

*/