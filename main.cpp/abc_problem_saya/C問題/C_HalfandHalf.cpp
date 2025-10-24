#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll a,b,c,x,y;
  cin >> a >> b >> c >>  x >> y;
  ll price = a*x + b*y;
  if(2*c-a-b<0) {
    price += min(x,y) *(2*c-a-b);
    if(x>y) price = min(price,price+(x-y)*((-a)+2*c));
    if(x<y) price = min(price,price+(y-x)*((-b)+2*c));
  }
  cout << price << endl;
  return 0;
}