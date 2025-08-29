//ラムダ式
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int>A(n);
    vector<int>B(n);
    vector<int>AB(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];
    rep(i,n) AB[i] = A[i]+B[i];

    vector<bool> ans(n); //falseで初期化

    auto f=[&](vector<int>A, int x){//ラムダ式
        vector<P>p;//空ペア配列
        rep(i,n) if(!ans[i]) p.emplace_back(-A[i],i);//無いものだけ入れる
        sort(p.begin(),p.end());
        rep(i,x) ans[p[i].second]=true;
    };

    f(A,x);
    f(B,y);
    f(AB,z);

    rep(i,n) if(ans[i]) cout << i+1 << endl;
    return 0;

}