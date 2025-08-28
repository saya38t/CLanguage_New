#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, ans = 0;
    cin >> n >> k;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            if(0<k-i-j&& k-i-j<n+1) ans++;
        }
    }
    cout << ans<< endl;
}
/*
二つに分ける
0<x<n+1, 0<y<n+1, 0<k-y-x<n+1
*/