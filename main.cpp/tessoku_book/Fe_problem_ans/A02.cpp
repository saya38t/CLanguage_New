#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    bool ans=false;
    for(int i=0; i<n; i++){
        if(a.at(i)==x){
            ans=true;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}