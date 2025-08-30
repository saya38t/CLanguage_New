#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int m = 2*n;
    vector<int>numA;
    rep(i,m){
        if(s[i]=='A') numA.push_back(i);
    }
    vector<int>G(n);
    vector<int>K(n);
    rep(i,n) {
        G[i]=2*i;
        K[i]=2*i+1;
    }
    ll cntG=0, cntK=0;
    rep(i,n){
        cntG += (ll) abs(numA[i]-G[i]);
        cntK += (ll) abs(numA[i]-K[i]);
    }
    cout << min(cntG,cntK) << endl;
    return 0;
}
/**/