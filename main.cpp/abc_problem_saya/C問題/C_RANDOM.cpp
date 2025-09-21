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
    int h,w;
    cin >> h >> w;
    vector<string>S(h);
    vector<string>T(h);
    rep(i,h) cin >> S[i];
    rep(i,h) cin >> T[i];
    vector<string>rs(w);
    vector<string>rt(w);
    rep(j,w)rep(i,h){
        rs[j]+=S[i][j];
        rt[j]+=T[i][j];
    }
    sort(rs.begin(),rs.end());
    sort(rt.begin(),rt.end());
    rep(i,w){
        if(rs[i]!=rt[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/