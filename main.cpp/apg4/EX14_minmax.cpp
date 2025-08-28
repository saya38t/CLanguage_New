#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int minimum = min(min(a,b),c);
    int maximum = max(max(a,b),c);
    cout << maximum - minimum << endl;
}
/*
minとmaxで最大最小求める
3676KB
*/