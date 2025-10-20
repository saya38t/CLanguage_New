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
  int s,a,b,x;
  cin >> s>>a>>b>>x;
  bool A=true;
  int sum=0;
  int cnta=0;
  while(sum<x){
    if(A) {
      sum+=a;
      cnta++;
      A=false;
    }
    else {
      sum+=b;
      A=true;
    }
  }
  int k=0;
  if(!A) {
    cnta--;
    k=a-(sum-x);
  }
  //cout << sum << endl;
    cout << cnta*(s*a)+k*s << endl;
  return 0;
}
/*言い換えてシンプルに解く*/