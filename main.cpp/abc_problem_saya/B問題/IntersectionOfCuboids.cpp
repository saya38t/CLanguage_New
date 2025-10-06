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
  int a,b,c,d,e,f;
  cin >> a>>b>>c>>d>>e>>f;
  int g,h,i,j,k,l;
  cin>> g>>h>>i>>j>>k>>l;
  if((j<=a||g>=d)
  ||(k<=b||h>=e)
  ||(l<=c||i>=f)){
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
/*言い換えてシンプルに解く*/