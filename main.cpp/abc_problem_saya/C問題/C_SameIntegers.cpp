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
  vector<int>abc(3);
  rep(i,3) cin >> abc[i];
  sort(abc.begin(),abc.end());
  int mx=abc[2], mdl=abc[1], mn=abc[0];
  int ans = 0;
  ans+=mx-mdl;
  int s=mx-(mn+ans);
  if(s%2==1){
    s++;
    ans++;
  }
  ans+=s/2;
  cout << ans << endl;
  return 0;
}
/*16分*/