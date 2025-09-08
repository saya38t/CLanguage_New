#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    string str = "wbwbwwbwbwbw";
    int w,b;
    cin >> w >> b;
    int k = (24+w+b)/12;
    string S;
    rep(i,k) S += str;
    rep(i,12){
        string cS = S.substr(i,w+b);
        int cntW=0, cntB=0;
        rep(j,w+b){
            if(cS[j]=='w') cntW++;
            else cntB++;
        }
        if(cntB==b) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
/**/