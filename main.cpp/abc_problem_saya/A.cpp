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
  int n; cin>> n;
  vector<string>S(n);
  rep(i,n) cin >> S[i];
  int MIN=0, l=S[0].size();
  rep(i,n) {
    if(S[i].size()<l){
      MIN=i; l=S[i].size();
    }
  }
  vector<string>ac;
  rep(k,l/2)rep(i,l-1) {
    ac.emplace_back(S[MIN].substr(i,k));
  }
  int A = ac.size();
  vector<bool>AC(A,false);
  rep(i,n)rep(j,A){
    if(S[i].find(ac[j])==string::npos) AC[i]=true;
  }
  int L=0;
  rep(i,A) if(!AC[i]) L=max(L,(int)ac[i].size());
  vector<string>ans;
  rep(i,A) if(!AC[i] && ac[i].size()==L)ans.emplace_back(ac[i]);
  sort(ans.begin(),ans.end());
  if(ans.size()>0)cout << ans[0] << endl;
  else cout << ' ' << endl;
  return 0;
}
//かんちがいしてた！！