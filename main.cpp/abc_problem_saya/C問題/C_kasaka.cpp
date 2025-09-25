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
    string s;
    int bk=0;
    rep(i,S.size()){//後ろ消す
        int j=S.size()-1-i;
        if(S[j]!='a'){
            s = S.substr(0,j+1);
            bk=i;//消す数
            break;
        }
    }
    int fo=0;
    rep(i,s.size()){//前消す
        if(S[i]!='a'){
            s = s.substr(i,s.size()-i);
            fo=i;//消す数
            break;
        }
    }//
    if(fo<=bk){//真ん中回文か、前だけ足せば合うか
        rep(i,s.size()){
            if(s[i]!=s[s.size()-1-i]) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}