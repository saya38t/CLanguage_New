#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<string>S(n);
    rep(i,n) cin >> S[i];
    int x;
    string y;
    cin >> x >> y;
    x--;
    if(S[x]==y) cout << "Yes" << endl;
    else cout << "No" << endl;
    return  0;
}
/**/