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
  int n,m;
  cin >> n >> m;
  vector<vector<ll>>B(n,vector<ll>(m));
  rep(i,n)rep(j,m) cin >> B[i][j];
  if((B[0][0]%7==0&&m>1) || B[0][0]%7>7-m+1){
    cout << "No" << endl;
    return 0;
  }
  vector<vector<ll>>b(n,vector<ll>(m));
  b[0][0]=B[0][0];
  rep(i,m-1) b[0][i+1]=b[0][i]+1;
  rep(j,m)rep(i,n-1){
    b[i+1][j]=b[i][j]+7;
  }
  if(b==B) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
//50分