#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};
//尺取り法、下限更新して処理回数の総和Nならrep(i,q)内でもO(N+Q)
int main(){
    int n,q;
    cin >> n >> q;
    int mx=1;
    priority_queue<P,vector<P>, greater<P>>Q;
    rep(i,n) Q.push(P(i+1,1));
    rep(i,q){
        int x,y;
        cin >> x >> y;
        //優先度付きキュー
        int ans = 0;
        while(!Q.empty()){
            if(Q.top().first>x) break;
            ans+=Q.top().second;
            Q.pop();
        }
        if(ans>0) Q.push(P(y,ans));
        //cout << Q.size()<< endl;
        //cout << Q.top().first << ' ' << Q.top().second << endl;
        //cout << mx << endl;
        cout << ans << '\n';
    }
    return 0;
}