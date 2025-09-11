#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);
using db = double;

int main(){
    int n;
    cin >> n;
    vector<double>x(n+1);
    vector<double>y(n+1);//
    rep(i,n) cin >> x[i+1] >> y[i+1];
    double ans = 0;
    for(int i=0; i<n+1;i++){
        double X=x[i+1]-x[i];
        double Y=y[i+1]-y[i];
        double a=X*X;
        double b=Y*Y;
        ans += sqrt(a+b);
    }
    printf("%.10f\n",ans);
    return 0;
}
/**/