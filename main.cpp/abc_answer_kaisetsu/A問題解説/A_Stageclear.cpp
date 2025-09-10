//フォーマット指定子
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int a,b;
    scanf("%d-%d", &a, &b);
    b++;
    if(b>8){
        a++;
        b=1;
    }
    printf("%d-%d\n", a, b);
    return 0;
}
/**/