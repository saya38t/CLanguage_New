#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin>> n;
    vector<int>l(n);
    rep(i,n) cin >> l[i];
    int m=0,h=0;
    rep(i,n) {
        if(l[i]==1){
            h=i+1;
            break;
        }
    }
    for(int j=n-1; j>-1;j--){
        if(l[j]==1){
            m=j;
            break;
        }
    }
    if(m==0 && h==0) cout << 0 << endl;
    else if(m-h<0) cout << 0 << endl;
    else cout << m-h+1 << endl;
    return 0;
}
/*言い換えてシンプルに解く*/