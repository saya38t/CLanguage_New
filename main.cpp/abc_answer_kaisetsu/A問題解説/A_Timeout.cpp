//実装として美しい工夫
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> t(n+1);
    //元々初期値０で配列されるのでt.at(0)=0;と置く必要なし
    rep(i, n) cin >> t.at(i+1);//i+1とすれば要素数1~nなので無問題
    //int check = s+0.5;不要。s+1より長いか短いかで判断可能
    rep(i, n){
        if(s < t.at(i+1) - t.at(i)){
            cout << "No" << endl;
            return 0;//return0でmain(){}のプログラム自体終了
        }
    }
    cout << "Yes" << endl;
    return 0;
}