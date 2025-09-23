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
    string w;
    cin >> w;
    int n=w.size();
    vector<char>vec(n);
    rep(i,n) vec[i]=w[i];
    sort(vec.begin(),vec.end());
    char sm=vec[0];
    int cnt = 0;
    rep(i,n){
        if(vec[i]==sm){
            cnt++;
        }
        else{
            if(cnt%2!=0) break;
            sm=vec[i];
            cnt=1;
        }
    }
    if(cnt%2==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/