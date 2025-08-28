#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,y;
    cin >> x >> y;
    vector<int> dise = {1,2,3,4,5,6};
    vector<int> dize = {1,2,3,4,5,6};
    double count=0;
    for(int c:dise){
        for(int d:dize){
            if((c+d)>=x) count++;
            else if((c-d)>=y || (d-c)>=y) count++;
        }
    }
    double ans = count/36;
    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}

/*

*/