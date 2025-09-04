#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<bool>teeth(n);
    rep(i,n) {
        if(s[i]=='O') teeth[i]=true;
    }
    int cnt = 0;
    int ck = k;
    rep(i,n){
        if(ck>0 && teeth[i]) ck--;
        else if(ck>0 && !teeth[i]) {
            ck = k;
            continue;
        }
        if(ck==0){
            cnt++;
            for(int j=i;j>i-k+1;j--){
                teeth[i] = false;
            }
            ck = k;
        }
    }
    cout << cnt << endl;
    return 0;
}
/**/