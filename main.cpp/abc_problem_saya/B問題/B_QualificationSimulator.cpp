#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n;
  cin >> n;
  int a,b;
   cin >> a >> b;
  string S;
  cin >> S;
  int ab=0,cntb=0;
  rep(i,n){
    string ans = "No";
    if(ab<a+b && S[i]=='a') {
      ab++;
      ans = "Yes";
    }
    if(ab<a+b && cntb<=b-1 && S[i]=='b') {
      ab++;
      cntb++;
      ans = "Yes";
      //cout << cntb << endl;
    }
    cout << ans << endl;
  }
  return 0;
}
/*言い換えてシンプルに解く*/