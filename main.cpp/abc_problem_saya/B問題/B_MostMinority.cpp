#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string>s(n);
    rep(i,n) cin >> s[i];
    int check = (n+1)/2;
    vector<int>majo(m);
    rep(i,m){
        int sum =0;
        rep(j,n){
            int num = s[j][i] - '0';
            sum += num;
        }
        if(sum==0 || sum==n) majo[i] = 2;
        else if(sum>=check) majo[i] = 0;
        else if(sum<check) majo[i] = 1;
    }

//
    multimap<int,int> map;
    int maxscore=0;
    rep(i,n){
        int score=0;
        rep(j,m){
            int num = s[i][j] - '0';
            if(majo[j]==2) score++;
            else score += num;
        }
        map.insert({i,score});
        maxscore = max(maxscore,score);
    }
    auto range = map.equal_range(maxscore);
    for(auto i=range.first; i != range.second; ++i){
        cout << i->first << i->second << ' ';
    }
    cout << endl;
    return 0;
}
/**/