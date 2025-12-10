#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll t; cin>>t;
  rep(i,t){
    ll n; cin>>n;
    vector<int>dmn(n);
    rep(i,n) cin >> dmn[i];
    int s=dmn[0],g=dmn[n-1];
    vector<int>vec;
    for(int d:dmn){
      if(d<s) continue;
      if(d>g) continue;
      vec.emplace_back(d);
    }
    sort(vec.begin(),vec.end());
    n=vec.size();
    if(n==2){
      if(s*2>=g) cout << 2 << endl;
      else cout << -1 << endl;
      continue;
    }
    bool flg=false;
    rep(i,n-1){
      if(vec[i]*2<vec[i+1]) {
        cout << -1 << endl;
        flg=true;
        break;
      }
    }
    if(flg) continue;
    int cnt=1;
    int last=0;
    for(int i=1; i<n; i++){
      if(vec[last]*2<vec[i]) {
        cnt++;
        last=i-1;
      }
    }
    cout<<cnt+1<<endl;
  }
  return 0;
}