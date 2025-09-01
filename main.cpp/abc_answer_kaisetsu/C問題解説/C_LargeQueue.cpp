#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int q;
    cin >> q;
    queue<P>cx;//キュー
    rep(i,q){
        int num;
        cin >> num;
        if(num==1){
            int c,x;
            cin >> c >> x;
            cx.emplace(c,x);//キューに追加
        }
        if(num==2){
            int k;
            cin >> k;//k回取り出す
            ll ans = 0;
            while(k>0){//kが0より大きいとき
                auto [c,x] = cx.front();
                if(k >= c){//k>=先頭のcのとき
                    ans += (ll) c*x;//c*x
                    k -= c;//k-先頭のc
                    cx.pop();//先頭のペアを削除
                }
                else if(k<c){//k<cのとき
                    ans += (ll) k*x;//k*x
                    cx.front().first-=k;//c-k
                    k=0;//while抜け出す
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;//場所間違えない！！
}
/**/