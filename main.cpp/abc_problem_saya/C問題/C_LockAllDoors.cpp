#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define _GLIBCXX_DEBUG//配列外参照防止
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n,r;
    cin >> n >> r;
    vector<int>l(n);
    rep(i,n) cin >> l[i];
    ll ans = 0;
    int R=r,L=r;
    if(r>n-1) {
        R=n-1; L=n-1;
    }
    rep(i,r+1) {//左～R
        if(l[i]==0){
            L=i;
            break;
        }
    }
    for(int i=n-1; i>r-1;i--){//右～R
        if(l[i]==0){
            R=i;
            break;
        }
    }
    if(L==R && l[L]==1){
        cout << 0 << endl;
        return 0;
    }
    for(int i=L; i<R+1; i++){
        ans+=(l.at(i)+1);
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/