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
const vector<int>di={1,0,0,-1};//表移動(4)
const vector<int>dj={0,1,-1,0};

int main(){
    int h,w; cin >> h >> w;
    vector<string>S(h);
    rep(i,h) cin >> S[i];
    rep(i,h)rep(j,w){
        if(S[i][j]=='#'){
            bool yes=false;
            rep(k,4){
                int I=i+di[k],J=j+dj[k];
                if(I<0 || I>h-1 || J<0 || J>w-1) continue;
                if(S[I][J]=='#'){
                    yes = true;
                    break;
                }
            }
            if(!yes){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}