#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<int>simple(n+2);
    simple[0] = 0;
    simple[n+1] = 360;
    int sim = 0;
    rep(i,n){
        sim += a[i];
        if(sim>=360) sim-=360;
        simple[i+1] = sim;
    }
    sort(simple.begin(), simple.end());
    set<int>dst;
    rep(i,n+1){
        dst.emplace(simple[i+1]-simple[i]);
    }
    auto maxIte = --dst.end();//set配列最大値(末尾)のイテレータ
    cout <<  *maxIte << endl;//イテレータが指す要素そのもの出力
    return 0;
}