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
    vector<string>s(h);
    rep(i,h) cin >> s[i];
    int si=h,sj=w,bi=-1,bj=-1;
    rep(i,h)rep(j,w){
        if(s[i][j]=='#'){
            si=min(si,i);
            sj=min(sj,j);
            bi=max(bi,i);
            bj=max(bj,j);
        }
    }
    for(int i=si; i<bi+1;i++){
        for(int j=sj; j<bj+1;j++){
            if(s[i][j]=='.'){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/