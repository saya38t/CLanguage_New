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
    vector<int>A(m);
    rep(i,m) cin >> A[i];
    vector<int>vote(n+1);
    int mx=0;
    int ans = -1;
    rep(i,m){
        vote.at(A[i])++;
        if(mx<vote[A[i]]) {
            mx=max(mx,vote[A[i]]);
            ans = A[i];
        }
        else if(mx==vote[A[i]]) ans = min(ans,A[i]);
        cout << ans << '\n';
    }
    return 0;
}
/*言い換えてシンプルに解く*/