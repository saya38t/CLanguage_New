#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<double>x(n+2);
    vector<double>y(n+2);//i=0~n+1
    x[0]=0; y[0]=0;//i=0の値
    rep(i,n) cin >> x[i+1] >> y[i+1];//i+1=1~nの値
    double ans = 0;
    for(int i=0; i<n+1;i++){//i=0~n,i+1=1~n+1
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