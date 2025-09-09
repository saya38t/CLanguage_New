#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y= 0;
    set<P>ans;
    ans.emplace(x,y);
    rep(i,n){
        if(s[i]=='R')x++;
        if(s[i]=='L')x--;
        if(s[i]=='U')y++;
        if(s[i]=='D')y--;
        ans.emplace(pair(x,y));
    }
    if(ans.size()==n+1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
/**/