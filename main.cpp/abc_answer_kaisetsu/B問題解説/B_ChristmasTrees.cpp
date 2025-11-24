#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll a,m,l,r;
    cin >> a >> m >> l >> r;
    l-=a; r-=a;//a==0
    if(l<0){
      ll X = -l/m+1;
      l+=X*m; r+=X*m;
    }
    ll ans = r/m-(l-1)/m;//lの前まで
    cout << ans << endl;
    return 0;
}