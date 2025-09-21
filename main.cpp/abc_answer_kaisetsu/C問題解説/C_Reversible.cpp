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
    set<string>st;
    int ans = 0;
    rep(i,n){
        string s;
        cin >> s;
        if(st.count(s)==0) ans++;//sが重複しないとき
        st.emplace(s);
        reverse(s.begin(),s.end());//逆のsもここで入れとく
        st.emplace(s);
    }
    cout << ans << endl;
    return 0;
}
/*なんで私はこーいうコードが書けなかったのでしょーか！*/