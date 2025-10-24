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
  vector<string>S(n);
  rep(i,n) cin >> S[i];
  vector<string>ans;
  auto dfs = [&](auto , vector<int>a) -> void {
    if(a.size()==k){//再帰終了時の処理
      string s="";
      rep(i,k) s+=S[a[i]];
      ans.emplace_back(s);
      return;//ループに戻る
    }
    rep(i,n){
      vector<int> na = a;//関数保持
      na.push_back(i);//足す
      dfs(dfs, na);//再帰呼び出し
    }
    };
    dfs(dfs,vector<int>(0));
    sort(ans.begin(),ans.end());
    cout << ans[x-1] << endl;
    return 0;
}