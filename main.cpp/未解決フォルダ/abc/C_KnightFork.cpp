#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<ll>A={
        a+1,a+1,a-1,a-1,a+2,a+2,a-2,a-2
    };
    vector<ll>B={
        b+2,b-2,b+2,b-2,a+1,a-1,a+1,a-1
    };
    vector<ll>C={
        c+1,c+1,c-1,c-1,c+2,c+2,c-2,c-2
    };
    vector<ll>D={
        d+2,d-2,d+2,d-2,d+1,d-1,d+1,d-1
    };
    rep(i,8)rep(j,8){
        if(A[i]==C[j] && B[i]==D[j]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}