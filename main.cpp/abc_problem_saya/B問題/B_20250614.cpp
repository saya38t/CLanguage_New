#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> box(n);
    for(int i=0; i<q;i++){
        int x;
        cin >> x;
        if(x>=1) {
            box.at(x-1)++;
            cout << x << ' ';
        }
        else if(x==0){
            int check=0;
            check=*min_element(box.begin(), box.end());
            rep(k,n){
                if(box.at(k)==check) {
                    box.at(k)++;
                    cout << k+1 << ' ';
                    break;
                }
            }
        }
    }
    return 0;
}