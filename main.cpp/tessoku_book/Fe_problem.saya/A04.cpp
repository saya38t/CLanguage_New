#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a=1;
    vector<int>ans(10);
    //繰り返したい
    for(int i=9; i>-1 ; i--){
        ans.at(i)=(n/a)%2;
        a*=2;
    }
    for(int i=0; i<10; i++){
        cout << ans.at(i);
    }
}
/*
各桁の計算をしたい
x桁のときaの値＝2^(x-1)
aの値はforでその都度計算する
*/