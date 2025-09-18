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
    int n,r;
    cin >> n >> r;
    vector<int>l(n);
    rep(i,n) cin >> l[i];
    r--;
    int R=r,L=r;
    rep(i,n){
      if(l[i]==1) continue;
      L=min(L,i-1);//左
      R=max(R,i);//右
    }
    ll ans = 0;
    for(int i=L+1; i<R+1; i++){
      //開始値と終了値がズレるので全部1とかl[r]==0を気にしなくていい
        ans+=(l.at(i)+1);
    }
    cout << ans << endl;
    return 0;
}
