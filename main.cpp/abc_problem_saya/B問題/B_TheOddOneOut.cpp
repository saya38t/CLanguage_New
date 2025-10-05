#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    string s;
    cin >> s;
    set<char>x;
    rep(i,s.size()) x.emplace(s[i]);
    char a,b;
    vector<char>z;
    for(char y:x) z.emplace_back(y);
    a=z[0]; b=z[1];
    //cout << a << b << endl;
    int A=0,B=0;
    rep(i,s.size()){
        if(s[i]==a) A++;
        if(s[i]==b) B++;
    }
    if(A==1) cout << a << endl;
    if(B==1) cout << b << endl;
    return 0;
}
/*言い換えてシンプルに解く*/