#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>A(n);
    vector<int>B(m);
    rep(i,n) cin >> A[i];
    rep(i,m ) cin >> B[i];

    vector<int>ansA;
    vector<int>ansB;
    int a=0, b=0;
    rep(i,n+m){
        int num = i;
        num++;
        if(a==n || b==m) {
            if(a==n){
                ansB.push_back(num);
                b++;
            }
            else{
                ansA.push_back(num);
                a++;
            }
        }
        else if(A[a]<B[b]){
            ansA.push_back(num);
            a++;
        }
        else if(B[b]<A[a]){
            ansB.push_back(num);
            b++;
        }
    }
    rep(i,n) cout << ansA[i] << ' ';
    cout << endl;
    rep(i,m) cout << ansB[i] << ' ';
    cout << endl;
    return 0;
}
/**/