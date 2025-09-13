/*解説見る！！！*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int h,m;
    cin >> h >> m;
    int a,b,c,d;
    rep(i,24){
        rep(j,60){
        m%=60;
        b=h%10;
        a=h/10;
        d=m%10;
        c=m/10;
        int H=10*a+c;
        int M=10*b+d;
        if(0<=H && H<=23 && 0<=M && M<=59){
            cout << h << ' ' << m << endl;
            return 0;
        }
        m++;
        if(m==60)break;
        }
        h++;
        h%=24;
    }
    return 0;
}
/**/