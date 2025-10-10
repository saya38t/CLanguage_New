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
  int n,k,x;
  cin >> n >> k >> x;
  vector<string>S(n);//文字列
  rep(i,n) cin >> S[i];

  //ｎ進数全探索
  vector<int>w(k+1);//n進数の各桁
  w[0]=1;//n^0
  rep(i,k) w[i+1]=w[i]*n;//n^1~k

  vector<string>ans;
  rep(i,w[k]){//0~n^k-1
    int t = i;
    string s;
    rep(j,k) s+=S[t/w[j]%n];//n^0~n^k-1で割る
    ans.emplace_back(s);
  }

  sort(ans.begin(),ans.end());
  cout << ans[x-1] << endl;
  return 0;
}
/*言い換えてシンプルに解く*/