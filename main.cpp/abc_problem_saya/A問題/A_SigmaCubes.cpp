#define _GLIBCXX_DEBUG//配列外参照防止
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
    cin >> n;
    int sum = 0;
    rep(i,n){
        int j=i+1;
        if(j%2==1) sum -= j*j*j;
        else sum += j*j*j;
    }
    cout << sum << endl;
    return 0;
}
/*言い換えてシンプルに解く*/