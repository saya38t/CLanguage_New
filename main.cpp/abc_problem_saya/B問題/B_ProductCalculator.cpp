#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    long long check=1;
    for(int i=0; i<k; i++){
        check*=10;
    }
    long long ans=1;
    for(int i=0; i<n;i++){
        long long a;
        cin >> a;
        if(a>=check){
            ans=1;
            continue;
        }
        ans*=a;
        if(ans>=check) {
            ans=1;
        }
    }
    cout << ans;
}
/*
i回目にAiをかけて答え算出
答えの桁数＞Kだったら答え＝１k
*/