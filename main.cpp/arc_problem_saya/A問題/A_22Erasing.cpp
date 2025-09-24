//いもす(累積和)
#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={0,1,1};//表移動(3)
const vector<int>dj={1,0,1};

int main(){
    int n,q;
    cin >> n >> q;
    vector<string>S(n);
    rep(i,n) cin >> S[i];
    vector<vector<int>>ims(n+1,vector<int>(n+1));
    rep(i,n)rep(j,n){
        if(S[i][j]=='.'){
            int cnt = 1;
            rep(k,3){
                int I=i+di[k],J=j+dj[k];
                if(I<0||I>n-1||J<0||J>n-1) continue;
                if(S[I][J]=='.') cnt++;
            }
            if(cnt==4) ims[i+1][j+1]=1;
        }
    }//
    rep(j,n)rep(i,n) ims[i+1][j]+=ims[i][j];//よこ
    rep(i,n)rep(j,n) ims[i][j+1]+=ims[i][j];//たて
    rep(i,q){
        int u,d,l,r;
        cin >> u >> d >> l >> r;
        int ans = ims[d-1][r-1]+ims[u-1][l-1]-ims[d-1][l-1]-ims[u-1][r-1];
        cout << ans << endl;
    }
    return 0;
}
/*言い換えてシンプルに解く*/