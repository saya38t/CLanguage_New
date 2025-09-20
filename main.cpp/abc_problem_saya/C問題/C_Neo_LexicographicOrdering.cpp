#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
   string X;
   cin >> X;
   int n;
   cin >> n;
   vector<string>in(n);
   rep(i,n) cin >> in[i];

   vector<vector<int>>conv(n);
    rep(i,n){
        rep(k,in[i].size()){
            rep(j,26){
                if(X[j]==in[i][k]){
                    conv[i].emplace_back(j);
                    break;
                }
            }
        }
    }
    sort(conv.begin(),conv.end());
    rep(i,n){
        rep(k,conv[i].size()){
            cout << X[conv[i][k]];
        }
        cout << '\n';
    }
    return 0;
}
/*言い換えてシンプルに解く*/