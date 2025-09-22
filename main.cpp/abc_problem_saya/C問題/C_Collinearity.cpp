#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    vector<P>xy(n);
    rep(i,n) cin >> xy[i].first >> xy[i].second;
    rep(i,n)for(int j=i+1; j<n; j++)for(int k=j+1; k<n; k++){
        vector<P>sxy(3);
        sxy[0]=xy[i];
        sxy[1]=xy[j];
        sxy[2]=xy[k];
        if((double)(sxy[2].first-sxy[1].first)*(sxy[0].second-sxy[1].second)
        ==(double)(sxy[2].second-sxy[1].second)*(sxy[0].first-sxy[1].first)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/