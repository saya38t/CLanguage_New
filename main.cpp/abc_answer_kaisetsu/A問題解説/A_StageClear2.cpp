//そのまま足す
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    string s;
    cin >> s;
    if(s[2]=='8'){
        s[2]='1';
        s[0]++;
    }
    else s[2]++;
    cout << s << endl;
    return 0;
}
/**/