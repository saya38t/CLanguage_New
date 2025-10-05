#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};
//累積和*優先度付きキュー
//キューは特に範囲外参照防止の#defineを消しておく
int main(){
    int n,q;
    cin >> n >> q;
    priority_queue<P,vector<P>, greater<P>>Q;
    int mx=1;
    rep(i,q){
        int x,y;
        cin >> x >> y;
        //累積和
        int ans = 0;
        ans += x-(mx-1);
        if(x<mx){
            cout << 0 << endl;
            continue;
        }
        //優先度付きキュー
        while(!Q.empty()){//空のとき省く
            if(Q.top().first>x) break;
            ans+=Q.top().second;
            Q.pop();
        }
        //cout << Q.size()<< endl;
        //cout << Q.top().first << ' ' << Q.top().second << endl;
        //cout << mx << endl;
        cout << ans << '\n';
        mx=x+1;
        Q.push(P(y,ans));
    }
    //cout << Q.top().first << ',' << Q.top().second;
    return 0;
}