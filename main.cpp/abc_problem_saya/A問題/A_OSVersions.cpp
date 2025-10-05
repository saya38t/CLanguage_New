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
    string x,y;
    cin >> x >> y;
    vector<string>s={"Ocelot", "Serval", "Lynx"};
    int a,b;
    rep(i,3){
        if(x==s[i])a=i;
        if(y==s[i])b=i;
    }
    //cout << a<< ' ' << b << endl;
    if(a>=b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/