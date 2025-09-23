#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int h,w,d;
    cin >> h >> w >> d;
    vector<string>S(h);
    rep(i,h) cin >> S[i];
    vector<set<P>>K;
    rep(i,h)rep(j,w){
        if(S[i][j]=='.'){
            set<P>st;
            int cnt = 0;
            rep(l,h)rep(m,w) if(S[l][m]=='.'&& abs(i-l)+abs(j-m)<=d)st.emplace(pair(l,m));
            K.emplace_back(st);
        }
    }
    int m = K.size();
    int ans = 0;
    rep(i,m)for(int j=i+1; j<m; j++){
        set<P>a;
        for(P d:K[i]) a.emplace(d);
        for(P d:K[j]) a.emplace(d);
        ans = max(ans,(int)a.size());
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/