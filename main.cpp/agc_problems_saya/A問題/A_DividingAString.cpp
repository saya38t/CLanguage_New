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
    int now=0;
    string pre;
    while(now < S.size()){
        if(one){//前が１文字
            if(S[now]==S[now-1]) {//2文字で斬る
                if(now==S.size()-1) break;
                pre=S[now]+S[now+1];
                now+=2;
                one = false;
            }
            else now++;
        }
        else {//１文字で斬る.最後2文字ダブっても3,1に分ければ良い
            one = true;
            now++;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}