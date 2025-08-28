#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int ans=0, twice=1;
    for(int i=n.length()-1; i>-1; i--){
        int x = n[i] - '0';
        ans += x*twice;
        twice*=2;
    }
    cout << ans << endl;
}