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
  ll n; cin >> n;
  int k=0;
  ll one=0,two=0;
  while(n>0){
    k++;
    int x = n%10;
    if(x%3==1)one++;
    else if(x%3==2) two++;
    n/=10;
  }
  ll ans;
  ans = abs(one-two)%3;
  if(ans==2 && one>0 && two>0) ans=1;//なおした
  if(ans>=k) ans=-1;
  cout << ans << endl;
  return 0;
}
/*言い換えてシンプルに解く*/