#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a*60+b > c*60+d) cout << "Yes";
    else cout << "No";
}
/*
A*60+B > C*60+D ならYes
*/