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
  int x; cin >> x;
  vector<int>s,z;
  while(x>0){
    if(x%10==0)z.emplace_back(0);
    else s.emplace_back(x%10);
    x/=10;
  }
  sort(s.begin(),s.end());
  cout << s[0];
  rep(i,z.size()) cout << z[i];
  rep(i,s.size()-1) cout << s[i+1];
  cout << endl;
  return 0;
}