#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    string S;
    cin >> S;
    if(S=="red") {
        cout << "SSS" << endl;
        return 0;
    }
     if(S=="blue") {
        cout << "FFF" << endl;
        return 0;
    }
     if(S=="green") {
        cout << "MMM"<< endl;
        return 0;
    }
    cout << "Unknown" << endl;
    return 0;
}
/**/