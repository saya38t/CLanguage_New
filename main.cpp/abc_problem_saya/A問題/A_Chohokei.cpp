#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n=3;
    vector<int>l(n);
    rep(i,n)  cin >> l[i];
    rep(i,n){
        int check = count(l.begin(), l.end(), l[i]);//l[i]の数を数える
        if(check == 3 || check ==1) {
            cout << l[i] << endl;
            return 0;
        }
    }
}