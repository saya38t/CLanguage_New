//2手先を考える
//桂馬とび？
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)
using ll = long long;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<pair<int, int>> move = {
        {1,2},{-1,2},{1,-2},{-1,-2},
        {2,1},{2,-1},{-2,1},{-2,-1}
    };
    rep(i,8)rep(j,8){
        ll mx = (ll) a + move[i].first + move[j].first;
        ll my = (ll) b + move[i].second + move[j].second;
        if(mx==c && my==d) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}