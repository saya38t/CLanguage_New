#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,a,b;
    string S;

    cin >> n >> a >> b;
    cin >> S;

    for(int i=a; i<n-b; i++){
        cout << S[i];
    }
     return 0;

}
/**/