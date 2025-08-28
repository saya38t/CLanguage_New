#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, sum=0;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i< N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  for(int j = 0; j<N; j++){
    int ans = vec.at(j)-(sum/N);
    cout << abs(ans) << endl;
  }
}

/*
absバージョン
一度ansに計算結果を入れるとメモリ節約
*/