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
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<bool>vec(2e5+1);
    int x=A[0]; vec[A[0]]=true;
    rep(i,n){
        if(vec[A[i]])continue;
        if(A[i]>x){
            x=A[i];
            vec[A[i]]=true;
        }
        else break;
    }
    rep(i,n){
        if(A[i]==x) continue;
        cout << A[i] << ' ';
    }
    cout << endl;
    return 0;

}
/*言い換えてシンプルに解く*/
//辞書順最小は、前から比較して小さい方が前になる。要素が無い場合、無い方が前になる
//2,3,3と1,1,3,3と1,1,3なら、1,1,3 < 1,1,3,3 < 2,3,3