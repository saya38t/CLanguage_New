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
  int n,m;
  cin >> n >> m;
  int x = 1;
   auto dfs = [&](auto dfs, vector<int>a) -> void {
        if(a.size()==n){//再帰終了時の処理
            rep(i,n) cout << a[i] << ' ';
            cout << endl;
            x=a[n-2]+1;
            a.pop_back();
            return;//ループに戻る
        }
        for(int i=x; i<=m; i++){
            vector<int> na = a;//関数保持
            na.push_back(i);//足す
            x=i+1;
            dfs(dfs, na);//再帰呼び出し
        }
    };
    dfs(dfs,vector<int>(0));
    return 0;
}
/*言い換えてシンプルに解く*/