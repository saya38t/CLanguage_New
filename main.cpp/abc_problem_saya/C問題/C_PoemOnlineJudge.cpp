#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define _GLIBCXX_DEBUG//配列外参照防止
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    set<string> st;
    int amd = 0;
    vector<P> point;
    rep(i,n){
        string S;
        int T;
        cin >> S >> T;
        st.emplace(S);
        if(st.size()+amd < i+1) {
            amd++;
            continue;
        }
        point.emplace_back(pair(T,-i-1));//(値、番号)
    }
    sort(point.rbegin(),point.rend());
    cout << -point[0].second << endl;
    return 0;
}
/*言い換えてシンプルに解く*/