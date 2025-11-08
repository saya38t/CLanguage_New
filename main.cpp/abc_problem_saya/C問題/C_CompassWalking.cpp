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
 double r,x,y;
 cin >> r >> x >> y;
 double l = sqrt(x*x+y*y);
 int ans = (int)l/r;
 if(fmod(l,r)>0&&ans!=0) ans++;//doubleの余りを求める
 //intでいうl%rをdoubleはfmod(l,r)とする
 if(ans==0) ans=2;
 cout << ans << endl;
  return 0;
}