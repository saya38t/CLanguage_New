#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for(int i=a; i < b+1; i++){
        if(100%i==0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
/*
100の約数
aからbの範囲で100%x==0を探す
*/