#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    set<int>A;
    rep(i,n){
        int a;
        cin >> a;
        A.emplace(a);
    }
    auto maxIte = --A.end();
    --maxIte;
    cout << *maxIte << endl;
}
/**/