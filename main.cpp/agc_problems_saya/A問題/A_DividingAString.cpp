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
    string S;
    cin >> S;
    int ans = 0;
    bool one = false;
    int i=0;
    string pre;
    while(i < S.size()){
        if(one){//前が１文字
            if(S[i]==S[i-1]) {
                pre=S[i]+S[i+1];
                i+=2;
                one = false;
            }
            else i++;
        }
        else if(i==S.size()-2 && pre==S.substr(S.size()-2,2)){//最後の処理
            ans--;
            break;
        }
        else {
            one = true;
            i++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/