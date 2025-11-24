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
  string S; cin >> S;
  S+='f';
  char pre = S[0];
  int cnt = 0;
  int C = 0;
  int ans = 0;
  rep(i,S.size()){
    if(S[i]==pre) cnt++;
    else if((int)S[i]-'0'==(int)pre-'0'+1){
      ans+=min(C,cnt);
      C =cnt;
      pre=S[i];
      cnt = 1;
    }
    else{
      ans += min(C,cnt);
      pre = S[i];
      cnt =1;
      C=0;
    }
  }
  cout << ans << endl;
  return 0;
}