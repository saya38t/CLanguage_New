#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n) ;++i)

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> cdn(h, vector<int>(w));
    for(int i=0; i<h;i++){
        for(int j=0; j<w; j++){
            int x;
            cin >> x;
            cdn.at(i).at(j)=x;
        }
    }
    for(int i=0; i<h; i++){
        rep(j,w-1) cdn[i][j+1] += cdn[i][j];
    }
    for(int i=0; i<w; i++){
        rep(j,h-1) cdn[j+1][i] += cdn[j][i];
    }
    int q;
    cin >> q;
    rep(i,q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        a--; b--; c--; d--;
        cout << cdn[c][d] + cdn[a-1][b-1] - cdn[a-1][d] - cdn[c][b-1] << endl;
    }
    return 0;
}
//139RE