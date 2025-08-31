#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    vector<ll>A(10);
    cin >> A[0] >> A[1];

    for(int i=2; i<10; i++){
        ll z = A[i-1]+A[i-2];
        string str=to_string(z);//数値->string
        reverse(str.begin(),str.end());
        ll num = stoll(str);//string->long long
        A[i]=num;
    };
    cout << A[9] << endl;
    return 0;
}
/**/