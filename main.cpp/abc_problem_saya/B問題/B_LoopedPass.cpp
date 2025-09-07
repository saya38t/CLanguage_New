#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<bool>>cdn(h+1,vector<bool>(w+1));
    rep(i,h){
        string S;
        cin >> S;
        rep(j,w){
            if(S[j]=='#') cdn[i+1][j+1]=true;
        }
    }
    for(int i=1; i<h+1; i++){
        for(int j=1; j<w+1; j++){
            if(cdn[i][j]){
            int ch = 0;
            if(i+1<=h && cdn[i+1][j]) ch++;
            if(i-1>0 && cdn[i-1][j]) ch++;
            if(j+1<=w && cdn[i][j+1]) ch++;
            if(j-1>0 && cdn[i][j-1]) ch++;
            if(ch!=2 && ch!=4) {
            cout << "No" << endl;
            return 0;
            }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/**/