#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

bool divisor(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 ) {
            while(n%i==0) n/=i;
            if(n>1){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    rep(i,t){
        int n;
    cin >> n;
    if(divisor(n))cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}