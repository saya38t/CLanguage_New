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
    set<string>chk;
    rep(i,n) cin >> S[i];
    rep(i,n){
        for(int j=i+1;j<n;j++){
        string Si=S[i], Sj=S[j];
        string s1=Si+Sj;
        string s2=Sj+Si;
        chk.emplace(s1);
        chk.emplace(s2);
        }
    }
    cout << chk.size() << endl;
    return 0;
}
/**/