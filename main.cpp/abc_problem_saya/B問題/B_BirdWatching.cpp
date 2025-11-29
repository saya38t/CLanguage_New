#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n,m;
  cin >> n >> m;
  map<int,double>mp;
  map<int,double>num;
  rep(i,n){
    int a,b;
    cin >> a >> b;
    mp[a]+=(double)b;
    num[a]++;
  }
  for(auto [key,val]:mp) cout << fixed << setprecision(15) << (double)val/num[key] << endl;
  //出力桁数指定(fixed << setprecision(有効数字何桁か))
  return 0;
}