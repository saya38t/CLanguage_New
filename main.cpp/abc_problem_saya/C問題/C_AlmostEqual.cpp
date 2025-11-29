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
  vector<string>vec(n);
  rep(i,n) cin >> vec[i];
  //next_permutation
  sort(vec.begin(),vec.end());//必ずsortしてから！
  do{//並び替えた配列への処理(順列全探索)
    int check=0;
    rep(i,n-1){
      string S1=vec[i],S2=vec[i+1];
      int cnt=0;
      rep(j,m){
        if(S1[j]!=S2[j]) cnt++;
      }
      if(cnt!=1) break;
      check++;
    }
    if(check==n-1){
      cout << "Yes" << endl;
      return 0;
    }
  }while(next_permutation(vec.begin(),vec.end()));//並び替え処理
  cout << "No" << endl;
  return 0;
}