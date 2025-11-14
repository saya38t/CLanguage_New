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
  int n,q; cin >> n >> q;
  string S; cin >> S;
  ll cnt = 0;
  rep(i,q){
    int num,x; cin >> num >> x;
    if(num==1){
      cnt += x;
      cnt %= n;
    }
    else{
      x--;
      cout << S[(x-cnt+n)%n] << endl;
    }
  }
  return 0;
}