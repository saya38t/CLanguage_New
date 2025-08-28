#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i);

int main(){
    int n,a,b;
    string s;
    cin >> n >> a >> b >> s;
    string ans = s.substr(a, n-a-b);//部分文字列
    cout << ans << endl;
}