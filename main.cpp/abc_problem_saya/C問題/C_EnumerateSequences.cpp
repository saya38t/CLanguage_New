//再帰関数による全探索
//深さ優先探索(dfs)
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>R(n);
    rep(i,n) cin >> R[i];
    auto dfs = [&](auto dfs, vector<int>a) -> void {
        if(a.size()==n){//再帰終了時の処理
            int s = 0;
            rep(i,n) s+=a[i];
            if(s%k==0){//条件を満たすか
                rep(i,n) cout << a[i] << ' ';
                cout << endl;
            }
            return;//ループに戻る
        }
        int x = a.size();
        for(int i=1; i<=R[x]; i++){
            vector<int> na = a;//関数保持
            na.push_back(i);//足す
            dfs(dfs, na);//再帰呼び出し
        }
    };
    dfs(dfs,vector<int>(0));
    return 0;
}
/**/