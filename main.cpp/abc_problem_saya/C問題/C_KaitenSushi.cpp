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
  int n,m; cin >> n >> m;
  vector<int>A(n);
  vector<int>B(m);
  rep(i,n) cin >> A[i];
  rep(i,m) cin>>B[i];
  vector<int>cpB = B;
  sort(cpB.begin(),cpB.end());
  vector<P>junc;
  int y=m;
  rep(i,n){
    int x = lower_bound(cpB.begin(),cpB.end(),A[i])-cpB.begin();
    if(x==cpB.size() || x>=y) continue;
    junc.emplace_back(pair(x,i+1));//座標、人番号
    y=x;
  }//
  sort(junc.begin(),junc.end());
  junc.emplace_back(pair(m,m));
  map<int,int>mp;
  int now=-1,j=0;
  rep(i,m){
    if(i>=junc[j].first){
      now=junc[j].second;
      j++;
    }
    mp[cpB[i]]=now;
  }
  rep(i,m){
    cout << mp[B[i]] << endl;
  }
  return 0;
}