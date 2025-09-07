#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    string s;
    cin >> s;
    int a = s[0]-'0';
    int b = s[2]-'0';
    if(b==8){
        cout << a+1 << '-' << 1;
    }
    else cout << a << '-' << b+1;
    cout << endl;
    return 0;
}
/**/