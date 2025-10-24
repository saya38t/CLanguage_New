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
  int p; cin >> p;
  vector<int>abcd(4);
  rep(i,4){
    abcd[3-i]=p%10;
    p/=10;
  }
  rep(s,8){//ビット全探索
        int score=abcd[0];
        vector<char>op;
        rep(i,3){
            if(s>>i &1){//i桁目が1なら
                score+=abcd[i+1];
                op.emplace_back('+');
            }
            else{
              score-=abcd[i+1];
              op.emplace_back('-');
            }
        }
        if(score == 7){
          cout << abcd[0];
          rep(i,3) cout << op[i] << abcd[i+1];
          cout << '=' << 7 << endl;
          return 0;
        }
    }
  return 0;
}