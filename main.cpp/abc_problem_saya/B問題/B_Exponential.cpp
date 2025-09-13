//べき乗
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    double x;
    cin >> x;
    set<double>sy;
    for(int b=31; b>=1; b--){
        for(int p=20;p>=2;p--){//forはdoubleだと上手くカウントされない
            double B=b, P=p;//pow内の型は全てdoubleでそろえる
            double ans = pow(B,P);//BのP乗
            if(x>=ans) {
                sy.emplace(ans);
                break;
            }
        }
    }
    auto maxIte = --sy.end();
    cout << *maxIte << endl;
    return 0;
}
/**/