//べき乗(貪欲)
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int x;
    cin >> x;
    //b>=1,p>=2
    int ans = 1;
    for(int b=2; b<x+1; b++){
        int a = b*b;//p>=2
        while(a<=x){
            ans = max(ans,a);
            a*=b;
        }
    }
    cout << ans << endl;
    return 0;
}
/**/