#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, X;
    string ans = "No";
    cin >> R >> X;
    if(X==1){
        if(R>=1600 && R<=2999) ans = "Yes";
    }
    else if(X==2){
        if(R>=1200 && R<=2399) ans = "Yes";
    }
    cout << ans << endl;
}

/*
R
*/