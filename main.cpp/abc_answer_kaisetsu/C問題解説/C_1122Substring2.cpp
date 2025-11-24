#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<char,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    string S; cin >> S;
    int n = S.size();
    vector<P>vec;
    vec.emplace_back(pair(S[0],0));
    rep(i,n){
        if(vec.back().first==S[i]) vec.back().second++;
        else vec.emplace_back(pair(S[i],1));
    }
    int ans = 0;
    rep(i,vec.size()-1){
        if(vec[i].first+1==vec[i+1].first) ans+=min(vec[i].second,vec[i+1].second);
    }
    cout << ans << endl;
    return 0;
}
//RLE(ランレングス圧縮)