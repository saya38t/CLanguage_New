//極座標
//角度から座標に落とし込む
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

const double PI = acos(-1);//acos(-1)==π

int main(){
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    double wh = (60*h+m)*2*PI/720;
    double wm = m*2*PI/60;
    double ax = a*sin(wh), ay = a*cos(wh);//座標に変換
    double bx = b*sin(wm), by = b*cos(wm);
    double dx = ax-bx;
    double dy = ay-by;
    double ans = sqrt(dx*dx+dy*dy);
    printf("%.11f\n",ans);//出力桁数を小数点以下11桁に指定
    //cout << ans << endl;とすると小数点以下6桁くらいで四捨五入されちゃう
    return 0;
}
/**/