#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    string s;
    cin >> n >> s;
    string ans;
    bool A = true;
    for(int i=n-1; i>-1; i--){
        if(A&&s[i]=='1') {
            i++;
            rep(j,i) ans += 'A';
            A=false;
        }
        else if (A==false && s[i]=='0'){
            i++;
            rep(j,i) ans += 'B';
            A=true;
        }
    }
    cout << ans.size() << '\n' << ans << endl;
    //数えなくてもsizeで行けたね
    return 0;
}