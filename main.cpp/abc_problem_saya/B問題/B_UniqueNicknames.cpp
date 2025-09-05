#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    vector<string>S(n);
    vector<string>T(n);
    rep(i,n) cin >> S[i] >> T[i];
    rep(i,n){
        bool s=false,t=false;
        rep(j,n){
        if(i==j) continue;
        if((S[i]==S[j] || S[i]==T[j]) && !s) s=true;
        }
        rep(j,n){
        if(i==j) continue;
        else if((T[i]==T[j] || T[i]==S[j]) && !t) t=true;
        }
        if(s && t){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/**/