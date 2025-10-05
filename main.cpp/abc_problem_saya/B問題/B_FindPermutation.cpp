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
    vector<bool>num(n+1,false);
    rep(i,n){
        if(A[i]!=-1){
            if(!num[A[i]]) num[A[i]]=true;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    vector<int>D;
    rep(i,n){//n
        int j=i+1;
        if(!num[j]) D.emplace_back(j);
    }
    cout << "Yes" << endl;
    int x = 0;
    rep(i,n){
        if(A[i]==-1) {cout << D[x] << ' '; x++;}
        else cout << A[i] << ' ';
    }
    cout << endl;
    return 0;
}
/*言い換えてシンプルに解く*/