#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    ll x,y;
    cin >> x >> y;
    vector<ll>A(10);
    A[0] = x;
    A[1] = y;

    auto f=[&](ll a, ll b){
        ll z = a+b;
        string str=to_string(z);
        reverse(str.begin(),str.end());
        ll num = stoll(str);
        return num;
    };
    for(int i=2; i<10; i++){
        A[i] = f(A[i-1], A[i-2]);
    }
    cout << A[9] << endl;
    return 0;
}
/**/