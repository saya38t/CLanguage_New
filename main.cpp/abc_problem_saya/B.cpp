#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  vector<ll>cinq(36),trois(40);
  cinq[0]=1; trois[0]=1;
  rep(i,35) cinq[i+1]=cinq[i]*5;
  rep(i,39) trois[i+1]=trois[i]*3;
  ll n; cin >> n;
  rep(i,35){
    rep(j,39){
      if(cinq[i+1]+trois[j+1]==n){
        cout << j+1 << ' ' << i+1 << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}
/*beetkiller...なんでえ*/