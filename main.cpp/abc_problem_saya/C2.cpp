#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);
using db = double;

int main(){
    double ans = 0;
    int n;
    cin >> n;
    vector<double>x(n+1);
    vector<double>y(n+1);//
    rep(i,n) cin >> x[i+1] >> y[i+1];
    for(int i=0; i<n+1;i++){
        double X=(double)x[i]-x[i+1];
        double Y=(double)y[i]-y[i+1];
        double a =X*X;
        double b=Y*Y;
        ans += sqrt(a+b);
        cout << ans<< endl;
    }
    printf("%18.18g\n",ans);//小数点以下16桁で出力(\nで改行)
    return 0;
}
/**/