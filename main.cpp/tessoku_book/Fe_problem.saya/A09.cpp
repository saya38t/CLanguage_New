#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> cdn(h+2, vector<int>(w+2));
  
  vector<int> A(n);
  vector<int> B(n);
  vector<int> C(n);
  vector<int> D(n);
  
  rep(i,n) cin >> A[i] >> B[i] >> C[i] >> D[i];
  rep(i,n){
    cdn[A[i]][B[i]]++;
    cdn[C[i]+1][D[i]+1]++;
    cdn[A[i]][D[i]+1]--;
    cdn[C[i]+1][B[i]]--;
  }
  for(int i=0; i<h+2; i++){
    for(int j=0; j<w+1; j++){
      cdn[i][j+1]+=cdn[i][j];
    }
  }
  for(int i=0; i<w+2; i++){
    for(int j=0; j<h+1; j++){
      cdn[j+1][i]+=cdn[j][i];
    }
  }
  for(int i=1; i<h+1; i++){
    for(int j=1; j<w+1; j++){
      cout << cdn[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}