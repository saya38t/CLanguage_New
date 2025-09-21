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
    rep(i,n){
        string s;
        cin >> s;
        st.emplace(s);
    }
    int l = st.size();
    vector<string>S;
    for(string a:st) S.emplace_back(a);
    int cnt= n-l;//
    int p = 0;
    rep(i,l){
        string s=S[i];
        string rs=S[i];
        reverse(rs.begin(),rs.end());
        if(rs==s) p++;
        st.emplace(rs);
    }
    cnt += (2*l-st.size()-p)/2;
    int ans = n-cnt;
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/