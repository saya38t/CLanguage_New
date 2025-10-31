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
  int n,m;
  cin >> n >>m;
  int N=2*n;
  vector<string>A(N);
  rep(i,N) cin >> A[i];
  vector<P>p(N);
  rep(i,N) p[i]=pair(0,-i);
  rep(i,m){
    rep(k,n){
    int K=2*k;
    char a=A[-p[K].second][i],b=A[-p[K+1].second][i];
    if((a=='G'&&b=='P')||(a=='P'&&b=='C')||(a=='C'&&b=='G'))p[K+1].first++;
    if((b=='G'&&a=='P')||(b=='P'&&a=='C')||(b=='C'&&a=='G'))p[K].first++;
    }
    sort(p.rbegin(),p.rend());
  }
  rep(i,N) cout << -p[i].second+1 << endl;
  return 0;
}