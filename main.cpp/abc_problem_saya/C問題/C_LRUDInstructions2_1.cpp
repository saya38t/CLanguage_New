#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)
using ll = long long;

bool solve(char a, char b){
  if(a=='L' && b=='R') return true;
  else if(a=='R' && b=='L') return true;
  else if(a=='U' && b=='D') return true;
  else if(a=='D' && b=='U') return true;
  return false;
}

int main(){
  int n;
  string s;
  cin >> n >> s;
  rep(i,n-1){
    if(solve(s[i],s[i+1])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
//何問かWA
// 連続した動作で行って戻る場合だけ考えてしまい
// めぐってまた同じ座標につく場合を想定できてなかった