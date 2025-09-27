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
    int n,l;
    cin >> n >> l;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    int x = 0;
    int L;
    rep(i,n){
        if(A[i]==2 && x==l-2){
            L=i+1;
            break;
        }
        x+=A[i]+1;
        if(x>l){
            L=i;
            break;
        }
    }
    for(int i=L;i<n; i++){
        if(A[i]==2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

/*言い換えてシンプルに解く*/