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
  int n; cin >>n;
  if(n==0){
    cout << '#' << endl;
    return 0;
  }
  vector<int>trois(n+1);
  trois[0]=1;
  rep(i,n) trois[i+1]=trois[i]*3;
  int m = trois[n];//
  rep(i,m){
    rep(j,m){
      bool white = false;
      for(int k=1; k<n+1; k++){
        int kk = trois[k];
        int KK = kk/3;
        if(KK<=i%kk && i%kk<=2*KK-1 && KK<=j%kk && j%kk<=2*KK-1) white=true;
      }
      if(white) cout << '.';
      else cout << '#';
    }
    cout << '\n';
  }

  return 0;
}