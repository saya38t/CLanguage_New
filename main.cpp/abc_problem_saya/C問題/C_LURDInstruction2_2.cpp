
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
int main(){
    int n;
    string s;
    cin >> n >> s;
    set<pair<int, int>> st;
    int x = 0, y=0;
    st.emplace(x,y);//pairに追加
    rep(i,n){
        if(s[i]=='R') x++;
        if(s[i]=='L') x--;
        if(s[i]=='U') y++;
        if(s[i]=='D') y--;
        st.emplace(x,y);
    }
    string ans = "No";
    if(st.size()<n+1) ans = "Yes";
    cout << ans << endl;
    return 0;
}