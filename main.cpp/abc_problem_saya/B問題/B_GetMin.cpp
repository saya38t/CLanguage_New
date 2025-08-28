#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int q;
    cin >> q;
    vector<int>box;
    for (int i=0; i<q;i++){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            box.push_back(x);
        }
        else if(num==2){
            sort(box.begin(), box.end()); // 昇順にソート
            cout << box[0] << endl;
            box.erase(box.begin());
        }
    }
    return 0;
}
/**/