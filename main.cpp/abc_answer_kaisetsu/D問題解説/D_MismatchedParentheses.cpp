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
  int n; string S;
  cin >> n >> S;
  vector<string>stk;//スタック
  stk.push_back("");
  rep(i,S.size()){
    if(S[i]=='('){
      stk.push_back("(");
    } else if(S[i]==')'){
      stk.back()+=')';
      if(stk.size()>1) stk.pop_back();
    } else stk.back()+=S[i];
  }
  rep(i,stk.size()) cout << stk[i];
  cout << endl;
  return 0;
}