#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, f = 0, a_sum = 0;
    cin >> N;
    for(int i = 0 ; i < 8 ; i++){//fを出す
        int ten = 10, tenth = 1;
        for(int j = 0 ; j < i ; j++){//10のi乗,i-1乗
            ten *= 10;
            tenth *= 10;
        }
        int a = 0;
        if(N<=a_sum)
          break;
        a = (N-a_sum)%ten;
        a_sum += a;
        f += a/tenth;
    }
    if (N % f == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}