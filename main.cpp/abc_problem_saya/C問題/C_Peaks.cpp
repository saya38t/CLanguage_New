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
    int n,m;
    cin >> n >> m;
    vector<ll>H(n);
    rep(i,n) cin >> H[i];
    vector<vector<int>>vec(n+1);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        if(H[a-1]<=H[b-1]) vec[a].emplace_back(b);
        if(H[b-1]<=H[a-1]) vec[b].emplace_back(a);
    }
    vec[0].emplace_back(1);
    int cnt=0;
    rep(i,n+1)if(vec[i].size()==0) cnt++;
    cout << cnt << endl;
    return 0;
}
/*言い換えてシンプルに解く*/