#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = -1;
    bool o=true;
    int start = 0;
    if(s[0]=='-') o=false;
    rep(i,n){
        if(o&&s[i]=='-'){
            ans = max(ans, i-start);
            o = false;
        }
        else if(o==false&&s[i]=='o'){
            start = i;
            o = true;
        }
        else if(o&&i+1-start<n) ans = max(ans, i+1-start);
    }
    if(ans==0) ans--;
    cout << ans << endl;
    return 0;
}