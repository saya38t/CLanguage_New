#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=a; i<b+1; i++){
        int t = 0;
        for(int j=c;j<d+1; j++){
            int sum=i+j;
            for(int k=2; k<sum; k++){
                if(sum%k==0){
                    t++;
                    break;
                }
            }
        }
        if(t==d-c+1) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}
/*解く！！*/