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
  vector<int>ans(2*n+2);
  for(int i=1; i<n+1; i++){
    int a;
    cin >> a;
    ans[2*i]=ans[a]+1;
    ans[2*i+1]=ans[a]+1;
  }
  rep(i,2*n+1) cout << ans[i+1] << endl;
  return 0;
}
/*言い換えてシンプルに解く*/